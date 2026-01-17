#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        set<int> numbers; 
        int zeros = 0;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            numbers.insert(number);
            if (number == 0) {
                zeros +=1;
            }
        }
        if (zeros == 0) {
            cout<< "NO" << "\n";
            continue;
        }
        else if (zeros == 1) {
            cout << "YES" << '\n';
        }
        else if (numbers.find(1) != numbers.end()){
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}