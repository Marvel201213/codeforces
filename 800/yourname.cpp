#include <iostream>
#include <string>
#include <map>

int main() {
    int cases;
    std::cin >> cases;
    for (int TEST = 0; TEST < cases; ++TEST) {
        int n;
        std::cin >> n;
        std::string s, t;
        std::cin >> s >> t;
        std::map<char, int> count1{}, count2{};
        for (char i: s) {
            if (count1.find(i) == count1.end()) {
                count1[i] = 1;
            }
            else {
                count1[i]+=1;
            }
        }
        for (char i: t) {
            if (count2.find(i) == count2.end()) {
                count2[i] = 1;
            }
            else {
                count2[i]+=1;
            }
        }
        bool flag = false;
        for (auto it = count1.begin(); it != count1.end(); ++it) {
            if (count2.find(it-> first)->second != it -> second) {
                std::cout << ("NO") << std::endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            std::cout << ("YES") << std::endl;
        }
    }
    
}
