#include <bits/stdc++.h>

void usain_bolt()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
}

const int N = 1e5 + 5;
const int PRIM_MAX = 1e6 + 5;

std::vector < std::pair < int, long long > > sum_primes_idx[PRIM_MAX], freq_primes_idx[PRIM_MAX];
std::vector < long long > sum_primes[PRIM_MAX], sum_array(N);
int a[N];
int freq_primes[PRIM_MAX];

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

    for (int i = 0; i < PRIM_MAX; ++i)
    {
        sum_primes_idx[i].push_back({-1, 0});
        freq_primes_idx[i].push_back({-1, 0});
    }

    for (int i = 0; i < n; ++i)
    {
        x = a[i];
        for (int d = 2; d <= x / 2; ++d)
        {
            if (x % d == 0)
            {
                while (x % d == 0)
                {
                    x /= d;
                }
                sum_primes_idx[d].push_back({i, sum_primes_idx[d][freq_primes[d]++].second + 1LL * a[i]});
                sum_primes[d].push_back(1LL * a[i]);
                freq_primes_idx[d].push_back({i, freq_primes[d]});
            }
        }
        if (x > 1)
        {
            sum_primes_idx[x].push_back({i, sum_primes_idx[x][freq_primes[x]++].second + 1LL * a[i]});
            sum_primes[x].push_back(1LL * a[i]);
            freq_primes_idx[x].push_back({i, freq_primes[x]});
        }
    }

    for (int i = 0; i < PRIM_MAX; ++i)
    {
        std::sort(sum_primes[i].begin(), sum_primes[i].end(), std::greater < long long >());
        for (size_t j = 1; j < (int) sum_primes[i].size(); ++j)
        {
            sum_primes[i][j] += sum_primes[i][j - 1];
        }
    }

    std::cin >> q;
    for (int i = 0; i < q; ++i)
    {
        std::cin >> x >> y;

        if (freq_primes[x] == 0)
        {
            std::cout << sum_array[y - 1] << "\n";
            continue;
        }
        std::pair < int, long long > reper = {y - 1, 0LL};
        int idx_1 = std::upper_bound(freq_primes_idx[x].begin(), freq_primes_idx[x].end(), reper) - freq_primes_idx[x].begin();

        if (freq_primes_idx[x][idx_1].first > y - 1 || idx_1 >= (int) freq_primes_idx[x].size())
        {
            --idx_1;
        }
        if (freq_primes_idx[x][idx_1].second == 0)
        {
            std::cout << sum_array[y - 1] << "\n";
            continue;
        }
        std::cout << sum_array[y - 1] + sum_primes[x][freq_primes_idx[x][idx_1].second - 1] - sum_primes_idx[x][idx_1].second << "\n";
    }
    return 0;
}
