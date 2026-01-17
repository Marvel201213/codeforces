#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        string seq; cin >> seq;
        vector<int> cands;
        int first = -1;
        int forwards = 0;
        for (int i = 0; i < n; ++i) {
            if (first == -1 && seq[i] == ')') {
                first = i;
                break;
            }
            if (seq[i] == '(') {
                forwards+=1;
            }
        }
        int length = -1;
        while (first < n-1) {
            if (forwards == n/2) {
                break;
            }
            if (seq[first+1]=='(' && forwards != n/2-1) {
                length = n-2;
                break;
            }
            first+=1;
            while (first < n && seq[first] != ')') {
                first+=1;
                forwards+=1;
            }
        }
        cout << length << '\n';
    }
    return 0;
}