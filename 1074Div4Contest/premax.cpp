#include <iostream>
#include <vector>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> nums;
        int max = -1;
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            nums.emplace_back(number);
            if (number > max) {
                max = number;
            }
        }
        cout << (max * n) << '\n';
    }
    return 0;
}