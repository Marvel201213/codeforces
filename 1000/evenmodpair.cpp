#include <iostream>
#include <vector>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        std::vector<int> numbers;
        bool flagor = true;
        for (int i =0 ; i < n; ++i) {
            int number; std::cin >> number;
            if (flagor) {
                for (int val: numbers) {
                    if ((number%val) % 2 == 0) {
                        std::cout << val << " " << number << std::endl;
                        flagor = false;
                        break;
                    }
                }
                numbers.emplace_back(number);
            }
        }
        if (flagor) {
            std::cout << -1 << std::endl;
        }
    }    
    return 0;
}
