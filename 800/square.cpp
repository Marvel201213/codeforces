#include <iostream>
#include <string>

int main() {
    int cases;
    std::cin >> cases;
    for (int TEST = 0; TEST < cases; ++TEST) {
        int one, two, three, four;
        std::cin>> one >> two >> three >> four;
        if ((one == two) && (one == three) && (one == four) && (two == three) && (two == four) && (three == four)) {
            std::cout << ("YES") << std::endl;
        }
        else {
            std::cout << ("NO") <<std::endl;
        }
    }
}
