#include <iostream>
#include <string>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        string input; cin >> input;
        if (input.size() == 1) {
            cout << 1 << "\n";
            continue;
        }
        int countleft = 0;
        int countright =0;
        int asterisk = 0;
        bool flag = true;
        for (int i =0; i < input.size()-1; ++i) {
            if (input[i] == '>' && input[i+1] == '<') {
                flag = false;
                cout << -1 << "\n";
                break;
            }
            else if (input[i] == '*' && input[i+1] == '<' || input[i] == '>' && input[i+1] == '*' || input[i] == '*' && input[i+1] == '*') {
                flag = false;
                cout << -1 << "\n";
                break;
            }
            else {
                if (input[i] == '>') {
                    countright+=1;
                }
                else if (input[i] == '<') {
                    countleft+=1;
                }
                else {
                    asterisk+=1;
                }
            }
        }
        if (flag) {
            if (input[input.size()-1] == '>') {
                countright+=1;
            }
            else if (input[input.size()-1] == '<') {
                countleft+=1;
            }
            else {
                asterisk+=1;
            }
            if (countleft < countright) {
                cout << asterisk+countright << "\n";
            }
            else {
                cout << asterisk+countleft << "\n";
            }
        }
    }
    return 0;
}