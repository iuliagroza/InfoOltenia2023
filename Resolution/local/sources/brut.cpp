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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int p, q;
        cin >> p >> q;

        vector<int> elem_div;
        for(int i=1; i<=n; i++) {
            if(a[i] % p == 0) {
                elem_div.push_back(a[i]);
            }
        }

        long long sol = 0;
        int cnt = 0;
        for(int i=1; i<=q; i++) {
            if(a[i] % p == 0) {
                cnt++;
            } else {
                sol += a[i];
            }
        }
        sort(elem_div.rbegin(), elem_div.rend());
        for(int i=0; i<cnt; i++) {
            sol += elem_div[i];
        }

        cout << sol << '\n';
    }

    return 0;
}