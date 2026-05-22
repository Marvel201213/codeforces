#include <iostream>

using namespace std;

int main () {
    string s;
    cin >> s;
    int res = 1;
    int curr = 1;
    char prev = s[0];
    for (unsigned int i = 1; i < s.length(); i++) {
        if (s[i] == prev) {
            curr+=1;
        } else {
            if (curr > res) {
                res = curr;
            }
            prev = s[i];
            curr = 1;
        }
    }
    if (curr > res) {
        res = curr;
    }
    cout << res;
    return 0;
}