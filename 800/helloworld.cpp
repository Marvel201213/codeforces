#include <iostream>

int main() {
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "\n";
    long version = __cplusplus;
    if (version == 202002) {
        std::cout << "Optimal Config C++ 2020, c++20";
    }
    else {
        std::cout << "Check Config, Deprecated Settings";
    }

    return 0;
}