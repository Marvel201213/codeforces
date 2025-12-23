#include <iostream>
#include <string>
#include <set>
#include <algorithm>
 
int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        std::string input; std:: cin >> input;
        std::set<char> vowels = {'a', 'e'};
        std::string output = "";
        while (input.size() >0) {
            std::string sub;
            if (vowels.find(input.back()) == vowels.end()) {
                output+=input.back();
                input.pop_back();
                output+=input.back();
                input.pop_back();
                output+=input.back();
                input.pop_back();
            }
            else {
                output+=input.back();
                input.pop_back();
                output+=input.back();
                input.pop_back();
            }
            if (input.size() != 0) {
                output+=".";
            }
        }
        std::reverse(output.begin(), output.end());
        std::cout << output << std::endl;
    }
    return 0;
}