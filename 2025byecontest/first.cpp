#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> numbers;
        long long aftersum = 0;
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            numbers.emplace_back(number);
            if (i!= 0) {
              aftersum+= -1 * number;
            } 
        }
        long long presum = 0;
        long long x = aftersum + presum;
        for (int i = 1; i < n; ++i) {
          if (i == 1) {
            presum+=numbers[i-1];
          }
          else {
            if (numbers[i-1]>=0) {
              presum+=numbers[i-1];
            }
            else {
              presum-=numbers[i-1];
            }
          }
          aftersum+=numbers[i];
          if (presum+aftersum > x) {
            x = presum+aftersum;
          }
        }
        
        cout << x << "\n"; 
    }
    return 0;
}