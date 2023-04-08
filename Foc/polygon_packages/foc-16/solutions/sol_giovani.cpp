// Copyright 2023 Ioan Popescu
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

int n, m;
vector<vector<int>> v, viz, sum;

void add_sum(int i1, int j1, int i2, int j2, int val) {
  sum[i1][j1] += val;
  sum[i1][j2 + 1] -= val;
  sum[i2 + 1][j1] -= val;
  sum[i2 + 1][j2 + 1] += val;
}


struct area {
  int i1, i2, j1, j2;
  area(int x, int y) : i1(x), i2(x), j1(y), j2(y) {}
  area(int l, int r, int u, int d) : i1(u), i2(d), j1(l), j2(r) {}

  void update(int x, int y) {
    this->i1 = std::min(this->i1, x);
    this->i2 = std::max(this->i2, x);
    this->j1 = std::min(this->j1, y);
    this->j2 = std::max(this->j2, y);
  }

  void end() {
    --i1; --j1;
    ++i2; ++j2;
    i1 = std::max(i1, 1);
    j1 = std::max(j1, 1);
    i2 = std::min(i2, n);
    j2 = std::min(j2, m);

    add_sum(1, j1, n, j2, 1);
    add_sum(i1, 1, i2, m, 1);
    add_sum(i1, j1, i2, j2, -1);
  }
};

void dfs(int i, int j, area &a) {
  viz[i][j] = 1;
  a.update(i, j);
  for (int k = 0; k < 4 ; ++k) {
    int x = i + dx[k];
    int y = j + dy[k];

    if (x >= 0 && y >= 0 && x <= n + 1 && y <= m + 1 && v[x][y] && !viz[x][y]) {
      dfs(x, y, a);
    }
  }
}

int main() {
  cin >> n >> m;

  v.resize(n + 2);
  for (int i = 0; i <= n + 1 ; ++i)
    v[i].resize(m + 2);
  viz = v;
  sum = v;

  for (int i = 1; i <= n ; ++i)
    for (int j = 1; j <= m ; ++j)
      cin >> v[i][j];

  for (int i = 0; i <= n + 1 ; ++i)
    v[i][0] = v[i][m + 1] = 1;
  for (int i = 0; i <= m + 1 ; ++i)
    v[0][i] = v[n + 1][i] = 1;

  area sol(0, 0);
  dfs(0, 0, sol);
  int nr = 0;
  for (int i = 1; i <= n ; ++i) {
    for (int j = 1; j <= m ; ++j) {
      if (viz[i][j] || !v[i][j])
        continue;
      ++nr;
      area a(i, j);
      dfs(i, j, a);
      a.end();
    }
  }

  bool found = false;
  for (int i = 1; i <= n ; ++i) {
    for (int j = 1; j <= m ; ++j) {
      sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
      if (sum[i][j] == nr) {
        cout << i << " " << j << "\n";
        found = true;
      }
    }
  }

  if (!found) {
    cout << -1 << "\n";
  }
  return 0;
}
