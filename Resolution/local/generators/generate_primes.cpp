#include <iostream>
#include <fstream>

std::ofstream fout("prime.txt");

int n;
bool v[1000005];

void ciur() {
    v[0] = v[1] = 1;
    for (int i = 4; i <= n; i += 2)
        v[i] = 1;
    for (int i = 3; i * i <= n; i += 2)
        if (!v[i])
            for (int j = i * i; j <= n; j += 2 * i)
                v[j] = 1;
}

int main() {
    std::cin >> n;
    ciur();
    for (int i = 1; i <= n; i++) {
        if (!v[i]) {
            fout << i << ", ";
        }
    }

    return 0;
}