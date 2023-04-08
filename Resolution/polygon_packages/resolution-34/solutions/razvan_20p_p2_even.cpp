#include <bits/stdc++.h>

void usain_bolt()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
}

const int N = 1e5 + 5;
const int PRIM_MAX = 1e6 + 5;

long long a[N];

int main()
{
    usain_bolt();
    int n, q, x, y;

    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }

    sort(a, a + n, std::greater < long long >());

    for (int i = 1; i < n; ++i)
    {
        a[i] += a[i - 1];
    }

    std:: cin >> q;

    for (int i = 0; i < q; ++i)
    {
        std:: cin >> x >> y;

        std::cout << a[y - 1] << "\n";
    }
    return 0;
}
