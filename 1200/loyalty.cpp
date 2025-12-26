#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; long long x; cin >> n >> x;
        std::vector<long long> numbers;
        for (int i = 0; i < n; ++i) {
            long long number; cin >> number;
            numbers.emplace_back(number);
        }
        sort(numbers.begin(), numbers.end());
        long long maxbon = 0;
        int l = 0;
        int r = n-1;
        long long s = 0;
        std::vector<long long> order = {};
        while (l<=r) {
            if (s+ numbers[r] >= x) {
                maxbon+=numbers[r];
                s+=numbers[r];
                s%=x;
                order.emplace_back(numbers[r]);
                r-=1;
            } 
            else {
                s+=numbers[l];
                order.emplace_back(numbers[l]);
                l+=1;
            }
        }
        cout << maxbon << "\n";
        for (int i =0; i < n; ++i) {
            if (i == n-1) {
                cout << order[i] << "\n";
            }
            else {
                cout << order[i] << " ";
            }
        }
    }
    return 0;
}