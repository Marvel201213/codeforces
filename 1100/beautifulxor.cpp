#include <iostream>
#include <vector>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int a,b; cin >> a >> b;
        int targetoperator = a^b;
        //Dealing with 32 bit integers, so I will naively do each bit of the targetoperator one by one since we are guaranteed for it to fall under the limit of 100 operations
        vector<int> operations = {};
        int shifts = 0;
        bool flag = true;
        while (targetoperator > 0) {
            if (targetoperator & 1 == 1) {
                int opcurr;
                opcurr= (1 << shifts);
                if (opcurr <= a) {
                    operations.emplace_back(opcurr);
                }
                else {
                    flag = false;
                    std::cout << -1 << "\n";
                    break;
                }
            }
            targetoperator >>= 1;
            shifts+=1;
        }
        if (flag) {
            cout << operations.size() << "\n";
            for (int i = 0; i < operations.size(); ++i) {
                if (i == operations.size()-1) {
                    cout << operations[i] << "\n";
                }
                else {
                    cout << operations[i] << " ";
                }
            }
        }
    }
    return 0;
}