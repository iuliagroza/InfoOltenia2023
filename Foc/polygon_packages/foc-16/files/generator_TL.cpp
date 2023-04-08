#include "testlib.h"
using namespace std;
 
const int NMAX = 1e3 + 5;
int A[NMAX][NMAX];
int main(int argc, char * argv[]) {
    registerGen(argc, argv, 1);
 
    int n = opt<int>("n");
    
    println(n, n);
 
    for (int r = 0; r <= n / 2; r += 2) {
        for (int i = n / 2 - r; i <= n / 2 + r; ++i)
            A[i][n / 2 - r] = 1;
        for (int i = n / 2 - r; i <= n / 2 + r; ++i)
            A[i][n / 2 + r] = 1;
        for (int j = n / 2 - r; j <= n / 2 + r; ++j)
            A[n / 2 - r][j] = 1;
        for (int j = n / 2 - r; j <= n / 2 + r; ++j)
            A[n / 2 + r][j] = rnd.wnext(2, n / 3);
    }
    for (int i = 1; i <= n; ++i) {
        vector<int> vec;
        for (int j = 1; j <= n; ++j)
            vec.push_back(A[i][j]);
        println(vec);
    }
}