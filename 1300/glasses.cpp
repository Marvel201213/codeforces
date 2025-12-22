#include <iostream>
#include <vector>
#include <set>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        int i = 0;
        std::vector<int> numbers;
        while (i  < n) {
            int number;
            std::cin >> number;
            if (i % 2 == 1) {
                numbers.emplace_back(number);
            }
            else {
                numbers.emplace_back(-1 * number);
            }
            i+=1;
        }
        std::set<long long> prefs = {};
        long long run = 0;
        int index = 0;
        bool flag = true;
        while (index < n) {
            run+=numbers[index];
            if (prefs.find(run) != prefs.end() || run == 0) {
                std::cout << "YES" << std::endl;
                flag = false;
                break;
            }
            prefs.insert(run);
            index+=1;
        }
        if (flag) {
            std::cout << "NO"<< std::endl;
        }
    }
    return 0;
}