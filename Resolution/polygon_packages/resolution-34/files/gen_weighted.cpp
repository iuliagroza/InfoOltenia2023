#include "testlib.h"
#include <vector>

using namespace std;

const int NMIN = 1;
const int NMAX = 1e5;

const int MMIN = 1;
const int MMAX = 1e5;

const int ELEMMIN = 1;
const int ELEMMAX = 1e5;

vector<int> primes;
bool v[ELEMMAX + 5];

void ciur() {
    v[0] = v[1] = 1;
    for (int i = 4; i <= ELEMMAX; i += 2)
        v[i] = 1;
    for (int i = 3; i * i <= ELEMMAX; i += 2)
        if (!v[i])
            for (int j = i * i; j <= ELEMMAX; j += 2 * i)
                v[j] = 1;
}

void build_primes() {
    ciur();
    for(int i=2; i<=ELEMMAX; i++) {
        if(!v[i]) {
            primes.push_back(i);
        }
    }
}

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = opt<int>("n");
    println(n);

    int elem_max = opt<int>("max");
    vector<int> a;
    for (int i = 0; i < n; i++) {
        a.push_back(rnd.next(1, elem_max));
    }
    println(a);

    int m = opt<int>("m");
    println(m);

    build_primes();
    const int primes_up_to_100_sz = 25;
    for (int i = 0; i < m/2; i++) {
        int pos = rnd.next(0, primes_up_to_100_sz);
        int p = primes[pos];
        int q = rnd.next(1, n);
        println(p, q);
    }

    int primes_sz = primes.size() - 1;
    for (int i = m/2; i < m; i++) {
        int pos = rnd.next(0, primes_sz);
        int p = primes[pos];
        int q = rnd.next(1, n);
        println(p, q);
    }
}