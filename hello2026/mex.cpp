#include <iostream>
#include <set>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n,k; cin >> n >> k;
        set<int> numbers;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            numbers.insert(number);
        }
        int mex = 0; 
        int i = 0;
        while (i < k-1) {
            if (numbers.find(i) != numbers.end()) {
                i+=1;
                mex+=1;
            }
            else {
                break;
            }
        }
        cout << mex <<'\n';
    }
    return 0;
}