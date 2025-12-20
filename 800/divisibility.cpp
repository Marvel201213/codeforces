#include <iostream>

int main() {
    int cases;
    std::cin >> cases;
    for (int TEST = 0; TEST < cases; ++TEST) {
        int a,b;
        std::cin >> a >> b;
        int output;
        if (a%b == 0) {
            output = 0;
        }
        else {
            output = (b) - (a % b);
        }
        std::cout << output << std::endl;
    }
}