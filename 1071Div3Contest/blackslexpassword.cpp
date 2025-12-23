#include <iostream>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int k, x; std::cin >> k >> x;
        std::cout << k*x+1 << std::endl;
    }
    return 0;
}