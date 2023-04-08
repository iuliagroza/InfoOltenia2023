#include "../testlib/testlib.h"
#include <vector>

using namespace std;

const int NMIN = 1;
const int NMAX = 1e5;

const int MMIN = 1;
const int MMAX = 1e5;

const int ELEMMIN = 1;
const int ELEMMAX = 1e5;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = opt<int>("n");
    int m = opt<int>("m");
    println(n, m);

    int n_comp = opt<int>("n_comp");

    vector<vector<int>> a;

    for(int i = 0; i < n; i++) {
        vector<int> aux;
        for(int j = 0; j < m; j++) {
            aux.push_back(0);
        }
        a.push_back(aux);
    }

    for(int i=0; i<n_comp; i++) {

    }

    for(int i=0; i<n; i++) {
        println(a[i]);
    }
}