#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> nums;
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            nums.emplace_back(number);
        }
        sort(nums.begin(), nums.end());
        int max_streak = 1;
        for (int i = 0; i < n; ++i) {
            int start = nums[i];
            int streak = 1;
            while (i+1 < n && nums[i+1]-nums[i] <= 1) {
                if (nums[i+1] == nums[i]) {
                    i+=1;
                    continue;  
                }
                else {
                    i+=1;
                    streak+=1;
                }
            }
            if (streak > max_streak) {
                max_streak = streak;
            }
        }
        cout << max_streak << '\n';
    }
    return 0;
}