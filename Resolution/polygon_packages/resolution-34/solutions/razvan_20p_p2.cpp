#include <bits/stdc++.h>

void usain_bolt()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
}

const int N = 1e5 + 5;

int freq_2[N], a[N];
long long sum_array[N], sum_2[N], multiple_2[N];

int main()
{
    usain_bolt();
    int n, q, x, y, cnt = 0;

    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
        if (a[i] % 2 == 0) {
            ++freq_2[i];
            sum_2[i] = a[i];
            multiple_2[cnt++] = 1LL * a[i];
        }
        sum_array[i] = 1LL * a[i];
        if (i > 0)
        {
            sum_array[i] += sum_array[i - 1];
            sum_2[i] += sum_2[i - 1];
            freq_2[i] += freq_2[i - 1];
        }
    }

    sort(multiple_2, multiple_2 + cnt, std::greater < long long >());
    for (int i = 1; i < cnt; ++i) {
        multiple_2[i] += multiple_2[i - 1];
    }

    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        std::cin >> x >> y;

        if (freq_2[y - 1] == 0) {
            std::cout << sum_array[y - 1] << "\n";
            continue;
        }
        std::cout << sum_array[y - 1] + multiple_2[freq_2[y - 1] - 1] - sum_2[y - 1] << "\n";
    }
    return 0;
}
