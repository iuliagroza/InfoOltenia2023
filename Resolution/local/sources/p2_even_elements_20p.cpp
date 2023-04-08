#include <iostream>
#include <algorithm>

using namespace std;

const int NMAX = 1e6 + 1;
int a[NMAX];

struct cmp {
    template<class T>
    bool operator()(T const &x, T const &y) const { return x > y; }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp());

    for (int i = 2; i <= n; i++) {
        a[i] += a[i - 1];
    }

    int m;
    cin >> m;
    while (m--) {
        int p, q;
        cin >> p >> q;
        cout << a[q] << '\n';
    }

    return 0;
}