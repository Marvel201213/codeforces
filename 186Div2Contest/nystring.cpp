#include <iostream>
#include <string>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        string input; cin >> input;
        if (input.find("2025") == string::npos) {
            cout << 0 << '\n';
        }
        else {
            if (input.find("2026") == string::npos) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
    } 
    return 0;
}