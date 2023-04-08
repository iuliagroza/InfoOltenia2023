#include "../testlib/testlib.h"
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

    int primes_sz = primes.size();
    for (int i = 0; i < m; i++) {
        int pos = rnd.next(0, primes_sz);
        int p = primes[pos];
        int q = rnd.next(1, n);
        println(p, q);
    }
}