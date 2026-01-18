#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n, m, h; cin >> n >> m >> h;
        vector<int> nums;
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            nums.emplace_back(number);
        }
        map<int, int> adder;
        for (int i = 0; i < m; ++i) {
            int b; int c; cin >> b >> c;
            if (adder.find(b-1) == adder.end()) {
                if (c+nums[b-1] > h) {
                    map<int, int> blank = {};
                    adder.swap(blank);
                }
                else {
                    adder[b-1] = c;
                }
            }
            else {
                if (nums[b-1]+adder[b-1]+c > h) {
                    map<int, int> blank = {};
                    adder.swap(blank);
                }
                else {
                    adder[b-1]+=c;
                }
            }
        }
        int total;
        for (int i = 0; i < n; ++i) {
            total = nums[i];
            if (adder.find(i) != adder.end()) {
                total+=adder[i];
            }
            if (i == n-1) {
                cout << total <<'\n';
            }
            else {
                cout << total <<" ";
            }
        }
    }
    return 0;
}