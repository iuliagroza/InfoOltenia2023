#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NMAX = 1e3 + 5;
const int MMAX = 1e3 + 5;

int n, m, componente, lin_st, lin_fin, col_st, col_fin, sum[NMAX][MMAX];
bool a[NMAX][MMAX];

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

bool invalid(int lin, int col) {
    return (lin < 1 || lin > n || col < 1 || col > m || !a[lin][col]);
}

void fill(int lin, int col) {
    if (invalid(lin, col)) {
        return;
    }

    lin_st = min(lin_st, lin);
    lin_fin = max(lin_fin, lin);
    col_st = min(col_st, col);
    col_fin = max(col_fin, col);

    a[lin][col] = 0;

    for (int i = 0; i < 4; i++) {
        fill(lin + dx[i], col + dy[i]);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 1) {
                lin_st = lin_fin = i;
                col_st = col_fin = j;
                fill(i, j);
                if (lin_st > 1 && lin_fin < n && col_st > 1 && col_fin < m) {
                    componente++;

                    lin_st--;
                    lin_fin++;
                    col_st--;
                    col_fin++;


                    sum[n][col_fin]++;
                    sum[n][col_st - 1]--;

                    sum[lin_fin][m]++;
                    sum[lin_fin][col_fin]--;

                    sum[lin_fin][col_st - 1]++;
                    sum[lin_st - 1][m]--;

                    sum[lin_st - 1][col_fin]++;
                    sum[lin_st - 1][col_st - 1]--;
                }
            }
    }

    vector<pair<int, int>> sol;
    for (int i = n; i >= 1; i--) {
        for (int j = m; j >= 1; j--) {
            sum[i][j] += sum[i + 1][j] + sum[i][j + 1] - sum[i + 1][j + 1];
            if (sum[i][j] >= componente) {
                sol.emplace_back(i, j);
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