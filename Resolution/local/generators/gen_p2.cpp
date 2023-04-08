#include "../testlib/testlib.h"
#include <vector>

using namespace std;

const int MAX = 10;

int main(int argc, char *argv[]) {
    registerGen(argc, argv, 1);

    int n = opt<int>("n");
    println(n);

    vector<int> a;
    for (int i = 0; i < n; i++) {
        a.push_back(rnd.next(1, MAX));
    }
    println(a);

    int m = opt<int>("m");
    println(m);

    for (int i = 0; i < m; i++) {
        int q = rnd.next(1, n);
        println(2, q);
    }
}