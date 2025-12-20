#include <iostream>
#include <vector>

int main () {
    int cases;
    std::cin >> cases;
    for (int TEST = 0; TEST < cases; ++TEST) {
        int n;
        std::cin >> n;
        std::vector<int> inputs;
        int i = 0;
        while (i < n) {
            int input;
            std::cin >> input;
            inputs.emplace_back(input);
            i+=1;
        }
        if (inputs.size() %2 == 0) {
            std::cout << 2 << std::endl;
            std::cout << "1 " << inputs.size() << std::endl;
            std::cout << "1 " << inputs.size() << std::endl;
        }
        else {
            std::cout << 4 << std::endl;
            std::cout << "1 " << inputs.size()-1 << std::endl;
            std::cout << "1 " << inputs.size()-1 << std::endl;
            std::cout << inputs.size()-1 << " " << inputs.size() << std::endl;
            std::cout << inputs.size()-1 << " " << inputs.size() << std::endl;
        }
    }
    return 0;
}