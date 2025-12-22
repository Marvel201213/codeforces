#include <iostream>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int a,b,c;
        std::cin >> a >> b >> c;
        int output = a ^ b ^ c;
        std::cout << output << std::endl;
    }

    return 0;
}