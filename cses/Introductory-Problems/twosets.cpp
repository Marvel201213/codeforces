#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long sum = (((long long)n) * ((long long)n+1))/2;
    if (sum % 2 == 0) {
        cout << "YES" << '\n';
        sum/=2;
        vector<int> first; 
        vector<int> second; 
        int i = n;
        while (sum > 0 && i > 0) {
            if (i <= sum) {
                sum-=i;
                first.emplace_back(i);
            }
            else {
                second.emplace_back(i);
            }
            i-=1;
        }
        while (i > 0) {
            second.emplace_back(i);
            i-=1;
        }
        cout << first.size() << '\n';
        for (int val : first) {
            cout << val << ' ';
        }
        cout << '\n';
        cout << second.size() << '\n';
        for (int val : second) {
            cout << val << ' ';
        }
        cout << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}