#include "testlib.h"
#include <vector>

#define PR_MAX 1000005
#define ZERO_OR_SAME 500

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
    }
}

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    get_primes();
    //divide_primes();

    int n = opt<int>("n");
    println(n);

    int sz = (int)primes.size();

    for (int i = 0; i < n; ++i) {
        long long nr = 1;
        do {
            int idx = rnd.next(78000, 78200);

            nr *= 1LL * primes[idx];
            if (nr > 1LL * (PR_MAX - 5)) {
                nr /= primes[idx];
                break;
            } else {
                ++found[primes[idx]];
            }
        } while (1);
        a.push_back((int)nr);
    }

    println(a);

    int enough = 0;
    int m = opt<int>("m");
    println(m);
    for (int i = 1; i <= m; ++i) {
        int idx_1, idx_2;

        do {
            idx_1 = rnd.next(0, sz - 1);

            if (found[primes[idx_1]]) {
                println(primes[idx_1], rnd.next(1, n));
                break;
            } else if (enough < ZERO_OR_SAME) {
                ++enough;
                println(primes[idx_1], rnd.next(1, n));
                break;
            }
        } while(1);
    }
}
