#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NMAX = 1e3 + 5;
const int MMAX = 1e3 + 5;

int n, m, componente, lin_st, lin_fin, col_st, col_fin, sum[NMAX][MMAX];
bool a[NMAX][MMAX], b[NMAX][MMAX];

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

bool invalid(int lin, int col) {
    return (lin < 1 || lin > n || col < 1 || col > m || !b[lin][col]);
}

void fill(int lin, int col) {
    if (invalid(lin, col)) {
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

void new_b_mat(int x, int y) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            b[i][j] = a[i][j];
            if (i == x || j == y) {
                b[i][j] = 1;
            }
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

    vector<pair<int, int>> sol;

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= m; y++) {
            new_b_mat(x, y);

            componente = 0;
            for (int i = 2; i <= n - 1; i++) {
                for (int j = 2; j <= m - 1; j++)
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