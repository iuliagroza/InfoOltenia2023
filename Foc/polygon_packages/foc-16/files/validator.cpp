#include "testlib.h"
#include <vector>

const int NMIN = 1;
const int NMAX = 1e3;

const int MMIN = 1;
const int MMAX = 1e3;

const int ELEMMIN = 0;
const int ELEMMAX = 1;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(NMIN, NMAX, "n");
    inf.readSpace();
    int m = inf.readInt(MMIN, MMAX, "m");
    inf.readEoln();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x = inf.readInt(ELEMMIN, ELEMMAX);
            ensure(x == 0 || x == 1);

            if (j < m - 1) {
                inf.readSpace();
            }
        }
        inf.readEoln();
    }

    if (validator.group() == "n-m-mici") {
        ensure(n <= 100);
        ensure(m <= 100);
    }

    inf.readEof();
}