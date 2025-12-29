#include <iostream>
#include <string>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        string input; cin >> input;
        int ycount = 0;
        for (char i: input) {
            if (i == 'Y') {
                ycount+=1;
            }
        }
        if (ycount > 1) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}