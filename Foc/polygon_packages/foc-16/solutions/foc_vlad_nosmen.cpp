#include <iostream>
#include <stack>
#include <tuple> 

using namespace std;

const int NMAX = 1e3 + 5;
int A[NMAX][NMAX];
bool viz[NMAX][NMAX];
pair<int, int> d[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; 
pair<pair<int, int>, pair<int, int>> dfs(int x, int y) {
    stack<pair<int, int>> st;

    st.push({x, y});
    int min_x = x, max_x = x;
    int min_y = y, max_y = y;
    viz[x][y] = 1;

    while (!st.empty()) {
        tie(x, y) = st.top();
        st.pop();
        for (int i = 0; i < 4; ++i) {
            int x2 = x + d[i].first;
            int y2 = y + d[i].second;
            if (!viz[x2][y2] && A[x2][y2]) {
                viz[x2][y2] = 1;
                st.push({x2, y2});
                min_x = min(min_x, x2);
                max_x = max(max_x, x2);
                min_y = min(min_y, y2);
                max_y = max(max_y, y2);
            } 
        }
    }
    return {{min_x, max_x}, {min_y, max_y}};
}

int prec_x[NMAX], prec_y[NMAX], prec_xy[NMAX][NMAX];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> A[i][j];
    int nr_comp = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if(!viz[i][j] && A[i][j]) {
                
                pair<pair<int, int>, pair<int, int>> R = dfs(i, j);
                int min_x, max_x;
                tie(min_x, max_x) = R.first;

                int min_y, max_y;
                tie(min_y, max_y) = R.second;

                

                if (min_x == 1 || max_x == n || min_y == 1 || max_y == m)
                    continue;
                else {
                    ++nr_comp;
                    for (int k = min_x - 1; k <= max_x + 1; ++k)
                        ++prec_x[k];
                    for (int k = min_y - 1; k <= max_y + 1; ++k)
                        ++prec_y[k];

                    for (int i1 = min_x - 1; i1 <= max_x + 1; ++i1)
                        for (int j1 = min_y -1; j1 <= max_y + 1; ++j1)
                            ++prec_xy[i1][j1];
                }
            }
    bool ok = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (prec_x[i] + prec_y[j] - prec_xy[i][j] == nr_comp) {
                cout << i << " " << j << "\n";   
                ok = 1;
            }
    if (!ok)
        cout << "-1\n";
}