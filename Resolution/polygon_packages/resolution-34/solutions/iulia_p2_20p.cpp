#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NMAX = 1e5 + 5;

int n;
vector<long long> a(NMAX);
vector<int> pos;
vector<long long> presum, sufsum;

void precalculare() {
    sort(sufsum.rbegin(), sufsum.rend());

    unsigned long long sz = presum.size();
    for (int i = 1; i < sz; i++) {
        presum[i] += presum[i - 1];
        sufsum[i] += sufsum[i - 1];
    }

    for (int i = 2; i <= n; i++) {
        a[i] += a[i - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        if(a[i] % 2 == 0) {
            presum.push_back(a[i]);
            sufsum.push_back(a[i]);
            pos.push_back(i);
        }
    }

    precalculare();

    int m;
    cin >> m;
    while (m--) {
        int p, q;
        cin >> p >> q;

        int cnt = -1;
        int st = 0;
        int dr = pos.size() - 1;
        while (st <= dr) {
            int mij = st + (dr - st) / 2;
            if (pos[mij] <= q) {
                cnt = mij;
                st = mij + 1;
            } else {
                dr = mij - 1;
            }
        }

        long long sol = a[q];
        if (cnt >= 0) {
            sol += sufsum[cnt] - presum[cnt];
        }
        cout << sol << '\n';
    }

    return 0;
}