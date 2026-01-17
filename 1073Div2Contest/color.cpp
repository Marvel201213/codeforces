#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> numbers; 
        set<int> colored;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            numbers.emplace_back(number);
            if (i%2 == 0) {
                colored.insert(number);
            }
        }
        bool flag = colored.find(1) == colored.end();
        bool ans = true;
        for (int i = 2; i <=n; ++i) {
            if ((colored.find(i) == colored.end()) == flag) {
                ans = false;
                break;
            }
            flag = !flag;
        }
        if (ans) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}