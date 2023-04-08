#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NMAX = 1e3 + 5;
const int MMAX = 1e3 + 5;

int n, m, lin_st, lin_fin, col_st, col_fin, aux[NMAX][MMAX];
bool a[NMAX][MMAX], b[NMAX][MMAX];
vector<pair<int, int>> comp_elem;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

void fill(int lin, int col) {
    if (lin < 1 || lin > n || col < 1 || col > m || !b[lin][col]) {
        return;
    }

    lin_st = min(lin_st, lin);
    lin_fin = max(lin_fin, lin);
    col_st = min(col_st, col);
    col_fin = max(col_fin, col);

    b[lin][col] = 0;

    for (int i = 0; i < 4; i++) {
        fill(lin + dx[i], col + dy[i]);
    }
}

void fill_aux(int lin, int col) {
    if (lin < 1 || lin > n || col < 1 || col > m || aux[lin][col] != 1) {
        return;
    }

    lin_st = min(lin_st, lin);
    lin_fin = max(lin_fin, lin);
    col_st = min(col_st, col);
    col_fin = max(col_fin, col);

    aux[lin][col] = 2;
    comp_elem.emplace_back(lin, col);

    for (int i = 0; i < 4; i++) {
        fill_aux(lin + dx[i], col + dy[i]);
    }
}

void build_b(int x, int y) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            b[i][j] = a[i][j];
            if (i == x || j == y) {
                b[i][j] = 1;
            }
        }
    }
}

void build_aux() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            aux[i][j] = a[i][j];
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    build_aux();
    int componente_out = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            if (aux[i][j] == 1) {
                comp_elem.clear();

                lin_st = lin_fin = i;
                col_st = col_fin = j;
                fill_aux(i, j);

                if (lin_st == 1 || lin_fin == n || col_st == 1 || col_fin == m) {
                    for (auto p: comp_elem) {
                        if (aux[p.first][p.second] == 2) {
                            a[p.first][p.second] = 0;
                        }
                    }
                    componente_out++;
                }
            }
    }

    vector<pair<int, int>> sol;
    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= m; y++) {
            build_b(x, y);

            int componente = 0;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++)
                    if (b[i][j] == 1) {
                        lin_st = lin_fin = i;
                        col_st = col_fin = j;
                        fill(i, j);
                        componente++;
                    }
            }

            if (componente == 1 && (lin_st == 1 || lin_fin == n || col_st == 1 || col_fin == m)) {
                sol.emplace_back(x, y);
            }
        }
    }

    if (sol.empty()) {
        cout << -1;
    }

    sort(sol.begin(), sol.end());
    for (auto coord: sol) {
        cout << coord.first << ' ' << coord.second << '\n';
    }

    return 0;
}