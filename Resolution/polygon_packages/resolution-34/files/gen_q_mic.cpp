#include "testlib.h"
#include <vector>

#define PR_MAX 1000005
#define ZERO_OR_SAME 100

std::vector < int > primes, big_prime, small_prime, a;
std::vector < bool > is_prime(PR_MAX, false);
std::vector < int > found(PR_MAX);

void get_primes()
{
    for (int i = 2; i < PR_MAX; ++i) {
        if (!is_prime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < PR_MAX; j += i) {
                is_prime[j] = true;
            }
        }
    }
}

void divide_primes()
{
    int sz = (int)primes.size();
    for (int i = 0; i * i < sz; ++i) {
        small_prime.push_back(primes[i]);
        big_prime.push_back(primes[sz - 1 - i - 50000]);
    }
}

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    get_primes();
    divide_primes();

    int n = opt<int>("n");
    println(n);

    int sz_small = (int)small_prime.size();
    int sz_big = (int)big_prime.size();
    int sz = (int)primes.size();

    for (int i = 0; i < n; ++i) {
        int smalll, bigg;
        long long nr;
        do {
            smalll = rnd.next(0, sz_small - 1);
            bigg = rnd.next(0, sz_big - 1);
            nr = 1LL * small_prime[smalll] * big_prime[bigg];
        } while (nr > 1LL * (PR_MAX - 5));
        ++found[small_prime[smalll]];
        ++found[big_prime[bigg]];
        do {
            int idx = rnd.next(0, sz);

            nr *= 1LL * primes[idx];
            if (nr > 1LL * (PR_MAX - 5)) {
                nr /= primes[idx];
                break;
            }
        } while (1);
        a.push_back((int)nr);
    }

    println(a);

    int enough = 0;
    int m = opt<int>("m");
    println(m);
    for (int i = 1; i <= m / 2; ++i) {
        int idx_1, idx_2;
        do {
            idx_1 = rnd.next(0, sz_small - 1);
            idx_2 = rnd.next(0, sz_big - 1);
        } while (!(found[small_prime[idx_1]] * found[big_prime[idx_2]]));

        println(small_prime[idx_1], rnd.next(1, 5000));
        println(big_prime[idx_2], rnd.next(5000, 10000));
    }
}
