#include <bits/stdc++.h>

void usain_bolt()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
}

const int N = 1e5 + 5;

int a[N];
long long sum_array[N], multiple[N];


int main()
{
    usain_bolt();
    int n, q, x, y;

    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
        sum_array[i] = 1LL * a[i];
        if (i > 0)
        {
            sum_array[i] += sum_array[i - 1];
        }
    }

    std::cin >> q;
    for (int i = 0; i < q; ++i)
    {
        std::cin >> x >> y;

        int nr_multiples = 0, all_multiples = 0;
        long long sum_multiple = 0, desire_sum = 0;
        for (int j = 0; j < y; ++j)
        {
            if (a[j] % x == 0)
            {
                sum_multiple += a[j];
                multiple[nr_multiples++] = 1LL * a[j];
            }
        }
        all_multiples = nr_multiples;
        for (int j = y; j < n; ++j)
        {
            if (a[j] % x == 0)
            {
                multiple[all_multiples++] = 1LL * a[j];
            }
        }
        std::sort(multiple, multiple + all_multiples, std::greater < long long >());
        for (int j = 0; j < nr_multiples; ++j)
        {
            desire_sum += multiple[j];
        }

        std::cout << sum_array[y - 1] + desire_sum - sum_multiple << "\n";
    }
    return 0;
}
