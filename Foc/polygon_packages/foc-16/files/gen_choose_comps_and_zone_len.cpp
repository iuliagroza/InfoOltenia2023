#include "testlib.h"
#include <vector>

const int N = 1e3 + 5;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int a[N][N];

bool check_neighbour(int n, int m, int x, int y, int len) {
    for (int i = x; i < std::min(n - 1, x + len); ++i) {
        for (int j = y; j < std::min(m - 1, y + len); ++j) {
            if (a[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool inside(int n, int m, int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    int n = opt<int>("n");

    int m = opt<int>("m");
    println(n, m);
    int comps = opt<int>("comps");
    int sz = opt<int>("len");

    for (int i = 0; i < comps; ++i) {
        do {
            int si = rnd.next(0, n - 1);
            int sj = rnd.next(0, m - 1);
            int times = rnd.next(1, sz * sz);
            if (check_neighbour(n, m, si, sj, comps) && !a[si][sj]) {
                a[si][sj] = 1;
                for (int j = 0; j < times - 1; ++j) {
                    do {
                        int x = rnd.next(si, std::min(si + sz - 1, n - 1));
                        int y = rnd.next(sj, std::min(sj + sz - 1, m - 1));
                        int found = false;

                        for (int k = 0; k < 4; ++k) {
                            int l = x + dx[k];
                            int c = y + dy[k];

                            if (inside(n, m, l, c) && a[l][c] && !a[x][y]) {
                                found = true;
                                a[x][y] = 1;
                                break;
                            }
                        }
                        if (found) {
                            break;
                        }
                    } while(1);
                }
                break;
            }
        } while (1);
    }
    for (int i = 0; i < n; ++i) {
        std::vector < int > b;
        for (int j = 0; j < m; ++j) {
            b.push_back(a[i][j]);
        }
        println(b);
    }
}
