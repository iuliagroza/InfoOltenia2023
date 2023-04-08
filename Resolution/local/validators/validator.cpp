#include "../testlib/testlib.h"
#include <vector>

const int NMIN = 1;
const int NMAX = 1e5;

const int MMIN = 1;
const int MMAX = 1e5;

const int ELEMMIN = 1;
const int ELEMMAX = 1e5;

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

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(NMIN, NMAX, "n");
    inf.readEoln();

    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int x = inf.readInt(ELEMMIN, ELEMMAX);
        if (i < n - 1) {
            inf.readSpace();
        }
        a.push_back(x);
    }
    inf.readEoln();

    int m = inf.readInt(MMIN, MMAX, "m");
    inf.readEoln();

    int p, q;
    for (int i = 0; i < m; i++) {
        p = inf.readInt(ELEMMIN, ELEMMAX);
        inf.readSpace();
        q = inf.readInt(NMIN, NMAX);
    }
    inf.readEoln();

    ensure(!v[p]);
    ensure(q <= n);

    if (validator.group() == "p2-20p") {
        ensure(p == 2);
    }
    if (validator.group() == "p2-even-elements-20p") {
        ensure(p == 2);
        for (auto x: a) {
            ensure(x % 2 == 0);
        }
    }
    if (validator.group() == "n-m-mici") {
        ensure(n <= 1000);
        ensure(m <= 1000);
    }

    inf.readEof();
}