#include <iostream>
#include <vector>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        std::vector<int> numbers;
        for (int i =0; i < n; ++i) {
            int number; std::cin >> number;
            numbers.emplace_back(number);
        }
        int min = numbers[0];
        for (int i: numbers) {
            if (i < min) {
                min = i;
            }
        }
        int secondmin;
        if (numbers[0] == min) {
            secondmin = numbers[1];
        }
        else {
            secondmin = numbers[0];
        }
        for (int i: numbers) {
            if (i != min && i < secondmin) {
                secondmin = i;
            }
        }
        int diff = secondmin -min;
        if (diff < min) {
            std::cout << min << std::endl;
        }
        else {
            std::cout << diff << std::endl;
        }
    }
    return 0;
}