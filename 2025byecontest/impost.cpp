#include <iostream>
#include <string>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        string input; cin >> input;
        int n = input.size();
        int operations = 0;
        if (input[0] != 's') {
            operations+=1;
            input[0] = 's';
        }
        if (input[n-1] != 's') {
            operations+=1;
            input[n-1] = 's';
        }
        for (int i =1; i < n-1; ++i) {
            if (input[i] == 'u' && input[i+1] == 'u') {
                input[i+1] = 's';
                operations+=1;
            }
        }
        std::cout << operations << '\n';
    }
    return 0;
}