#include <iostream>
#include <vector>

using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        if (n==1) {
            cout << 1 << '\n';
            continue;
        }
        vector<int> numbers;
        int a; cin >> a; int max = -1; int sum = 0;
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            if (number > max) {
                max = number;
            }
            sum+=number;
            numbers.emplace_back(number);
        }
        long long count = 0;
        if ((max-1) * (n-1) + max - sum > a) {
            cout << 0 << '\n';
        }
        else {
            count+= (n-1);
            int j = max+1;
            while(j + (j-1)*(n-1)-sum <= a) {
                count+=(n-1);
                count%=998244353;
            }
        }
        cout << count << '\n';

    } 
    return 0;
}