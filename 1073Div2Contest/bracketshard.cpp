#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

bool validity(string& seq) {
    if (seq.size() % 2==1) {
        return false;
    }
    stack<char> match;
    for (char i: seq) {
        if (i == '(') {
            match.push(i);
        }
        else {
            if (match.size() == 0) {
                return false;
            }
            else {
                match.pop();
            }
        }
    }
    return (match.size() == 0);
}

int score(string& seq) {
    if (seq.size() == 0) {
        return 0;
    }
    int val;
    if (!validity(seq)) {
        val = 0;
    }
    else {
        int first = -1;
        int forwards = 0;
        for (int i = 0; i < seq.size(); ++i) {
            if (first == -1 && seq[i] == ')') {
                first = i;
                break;
            }
            if (seq[i] == '(') {
                forwards+=1;
            }
        }
        while (first < seq.size()-1) {
            if (forwards == (seq.size())/2) {
                break;
            }
            if (seq[first+1]=='(' && forwards != (seq.size())/2-1) {
                val = seq.size()-2;
                break;
            }
            first+=1;
            while (first < seq.size() && seq[first] != ')') {
                first+=1;
                forwards+=1;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < seq.size(); ++i) {
        sum+= score(seq.substr(0, i) + seq.substr(i+1, seq.size()));
    }
    return sum;

}

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        string seq; cin >> seq;
        cout << score(seq) << '\n';
    }
    return 0;
}