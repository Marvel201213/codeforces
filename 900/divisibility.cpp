#include <iostream>
#include <cmath>

int main () {
    int T;
    std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        long long x;
        std::cin >> x;
        std::cout << 2 * x << std::endl;
    }
    return 0;
}