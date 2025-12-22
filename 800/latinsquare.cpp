#include <iostream>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        for (int row = 0; row < 3; ++row) {
            char a,b,c;
            std::cin >> a >> b >> c;
            char sxor = a ^ b ^ c ^ '?' ^ 'A' ^ 'B' ^ 'C';
            if (sxor != '?') {
                std::cout << sxor << std::endl;
            }
        }
    }

    return 0;
}