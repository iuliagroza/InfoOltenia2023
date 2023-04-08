#include <bits/stdc++.h>

std::ifstream fin ("solve.in");
std::ofstream fout ("solve.out");

void usain_bolt()
{
    std::ios::sync_with_stdio(false);
    fin.tie(0);
}

const int N = 1e5 + 5;
const int PRIM_MAX = 1e6 + 5;

std::vector < long long > sum_array(N), bucket_primes_1000[105];
std::vector < bool > is_prime(10000, false);
std::vector < int > primes, idx(10000, 0);

int a[N], found_1000[N][105];
long long sum_primes_1000[N][105], multiple[N];


void ciur()
{
    int found = 0;

    for (int i = 2; found < 100; ++i) {
        if (!is_prime[i]) {
            primes.push_back(i);
            idx[i] = found++;
            for (int j = i + i; j < 10000; j += i) {
                is_prime[j] = true;
            }
        }
    }
}

int main()
{
    usain_bolt();
    ciur();
    int n, q, x, y;

    fin >> n;
    for (int i = 0; i < n; ++i)
    {
        fin >> a[i];
        sum_array[i] = 1LL * a[i];
        if (i > 0)
        {
            sum_array[i] += sum_array[i - 1];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (int)primes.size(); ++j) {
            if (i > 0) {
                sum_primes_1000[i][j] = sum_primes_1000[i - 1][j];
                found_1000[i][j] = found_1000[i - 1][j];
            } else {
                sum_primes_1000[i][j] = 0LL;
                found_1000[i][j] = 0;
            }
            if (a[i] % primes[j] == 0) {
                sum_primes_1000[i][j] += 1LL * a[i];
                bucket_primes_1000[j].push_back(a[i]);
                ++found_1000[i][j];
            }
        }
    }
    for (int i = 0; i < 100; ++i)
    {
        std::sort(bucket_primes_1000[i].begin(), bucket_primes_1000[i].end(), std::greater < long long >());
        for (size_t j = 1; j < (int) bucket_primes_1000[i].size(); ++j)
        {
            bucket_primes_1000[i][j] += bucket_primes_1000[i][j - 1];
        }
    }
    fin >> q;
    for (int i = 0; i < q; ++i)
    {
        fin >> x >> y;

        if (x <= primes[99]) {
            if (found_1000[y - 1][idx[x]] == 0) {
                fout << sum_array[y - 1] << "\n";
                continue;
            }

            fout << sum_array[y - 1] + bucket_primes_1000[idx[x]][found_1000[y - 1][idx[x]] - 1] - sum_primes_1000[y - 1][idx[x]] << "\n";
            continue;
        }

        int nr_multiples = 0, all_multiples = 0;
        long long sum_multiple = 0, desire_sum = 0;

        for (int j = 0; j < y; ++j)
        {
            if (a[j] % x == 0)
            {
                sum_multiple += 1LL * a[j];
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

        fout << sum_array[y - 1] + desire_sum - sum_multiple << "\n";

    }
    return 0;
}
