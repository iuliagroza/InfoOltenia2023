#include <iostream>
#include <algorithm>

using namespace std;

const size_t MAX = 1000005;
int n, m, p, q, v[MAX], d[MAX], id[MAX];
long long sum[MAX];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }

    while(m--) {
        cin >> p >> q;

        int cnt_div = 0, cnt_q = 0;
        for(int i = 1; i <= n; i++)
            if(v[i] % p == 0) {
                d[++cnt_div] = v[i];

                if(i <= q)
                    id[++cnt_q] = i;
            }

        sort(d + 1, d + cnt_div + 1, cmp);

        long long res = sum[q];
        for(int i = 1; i <= cnt_q; i++)
            res += d[i] - v[id[i]];

        cout << res << '\n';
    }

    return 0;
}