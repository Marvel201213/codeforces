#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        string bin; cin >> bin; 
        char prev = bin[0];
        vector<int> indices;
        int count = 0;
        for (int i =0; i <n; ++i) {
            if (bin[i] == '1') {
                count+=1;
            }
        }
        for (int i = 0; i < n-count; ++i) {
            if (bin[i] == '1') {
                indices.emplace_back(i+1);
            }
        }
        for (int i = n-count; i < n; ++i) {
            if (bin[i] == '0') {
                indices.emplace_back(i+1);
            }
        }
        if (indices.size() == 0) {
            cout << "Bob" <<'\n';
        }
        else {
            cout << "Alice" <<'\n';
            cout << indices.size() <<'\n';
            for (int i= 0; i <indices.size(); ++i) {
                if (i != indices.size()-1) {
                    cout << indices[i] << " ";
                }
                else {
                    cout << indices[i] << '\n';
                }
            }
        }
    }
    return 0;
}