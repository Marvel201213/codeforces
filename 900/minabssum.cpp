#include <iostream>
#include <vector>
#include <cmath>

int main () {
    int T;
    std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        int i = 0;
        std::vector<int> inputs; 
        while (i < n) {
            int input;
            std::cin >> input;
            inputs.emplace_back(input);
            i+=1;
        }
        if (inputs[0] != -1 && inputs[n-1] != -1) {
            std::cout << std::abs(inputs[n-1]-inputs[0]) << std::endl;
        }
        else  {
            std::cout << 0 << std::endl;
            if (inputs[0] == -1 && inputs[n-1] == -1) {
                inputs[0] = 0;
                inputs[n-1] = 0;
            }
            else if (inputs[0] == -1) {
                inputs[0] = inputs[n-1];
            }
            else {
                inputs[n-1] = inputs[0];
            }
        }

        for (int j = 0; j < n; ++j) {
            if (inputs[j] == -1) {
                inputs[j] = 0;
            }
        }
        int j =0;
        while (j < n) {
            if (j == n-1) {
                std::cout << inputs[j] << std::endl;
            }
            else {
                std::cout << inputs[j] << " ";
            }
            j+=1;
        }
    }
    return 0;
}