#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NMAX = 1e5 + 5;
const int ELEMMAX = 1e6 + 5;
vector<vector<int>> fact(ELEMMAX);

int n;
vector<int> a(NMAX);
vector<vector<long long>> multipli(ELEMMAX);
vector<vector<long long>> multipli_desc(ELEMMAX);
vector<vector<int>> pos(ELEMMAX);

void ciur() {
    for (int i = 2; i < ELEMMAX; i++) {
        if (fact[i].empty()) {
            for (int j = i; j < ELEMMAX; j += i) {
                fact[j].push_back(i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ciur();

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        for (auto factor: fact[a[i]]) {
            multipli[factor].push_back(a[i]);
            multipli_desc[factor].push_back(a[i]);
            pos[factor].push_back(i);
        }
    }

    for (int i = 2; i <= ELEMMAX; i++) {
        sort(multipli_desc[i].rbegin(), multipli_desc[i].rend());
    }

    int m;
    cin >> m;
    while (m--) {
        int p, q;
        cin >> p >> q;

        int cnt = -1;
        int st = 0;
        int dr = pos[p].size() - 1;
        while (st <= dr) {
            int mij = st + (dr - st) / 2;
            if (pos[p][mij] <= q) {
                cnt = mij;
                st = mij + 1;
            } else {
                dr = mij - 1;
            }
        }

        long long sol = 0;
        for (int i = 1; i <= q; i++) {
            sol += a[i];
        }

        if (cnt >= 0) {
            for (int i = 0; i <= cnt; i++) {
                sol += multipli_desc[p][i];
                sol -= multipli[p][i];
            }
        }
        cout << sol << '\n';
    }

    return 0;
}