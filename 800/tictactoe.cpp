#include <fstream>
#include <iostream>
#include <string>
#include <set>
#include <tuple>

void helper (const std::string& line, std::set<char>& ones, std::set<std::tuple<char, char>>& twos);

int main () {
    std::string row1, row2, row3; 
    std::ifstream inFile("tttt.in");
    std::getline(inFile, row1);
    std::getline(inFile, row2);
    std::getline(inFile, row3);

    std::cin >> row1;
    std::cin >> row2;
    std::cin >> row3;
    std::set<char> ones;
    std::set<std::tuple<char, char>> twos;
    helper(row1, ones, twos);
    helper(row2, ones,twos);
    helper(row3, ones, twos);
    std::string col1{""}, col2{""}, col3{""};
    col1+= row1[0]; col1+= row2[0]; col1+= row3[0];
    col2+= row1[1];col2+= row2[1]; col2+= row3[1];
    col3+= row1[2];col3+= row2[2]; col3+= row3[2];
    helper(col1, ones, twos);
    helper(col2, ones, twos);
    helper(col3, ones, twos);
    std::string d1{""}, d2{""};
    d1+= row1[0];d1+= row2[1]; d1+= row3[2];
    d2+= row1[2];d2+= row2[1]; d2+= row3[0];
    helper(d1, ones, twos);
    helper(d2, ones, twos);
    std::ofstream outFile("tttt.out");
    outFile << ones.size() << std::endl;
    outFile << twos.size() << std::endl;
}

void helper (const std::string& row1, std::set<char>& ones, std::set<std::tuple<char, char>>& twos) {
        std::set<char> characterset;
        for (char i: row1) {
            characterset.insert(i);
        }
        if ((int)characterset.size() < 3) {
            if (characterset.size() == 1) {
                for (char j: characterset) {
                    if (ones.find(j) == ones.end()) {
                        ones.insert(j);
                    }
                }
            }
            else {
                char char1{' '}, char2{' '}; 
                for (char j: characterset) {
                    if (char1 == ' ') {
                        char1 = j;
                    }
                    else {
                        char2 = j;
                    }
                }  
                if (char1 < char2) {
                    std::tuple<char, char> inserter(char1, char2);
                    if (twos.find(inserter) == twos.end()) {
                        twos.insert(inserter);
                    }
                }
                else {
                    std::tuple<char, char> inserter(char2, char1);
                    if (twos.find(inserter) == twos.end()) {
                        twos.insert(inserter);
                    }
                }
            }
        }

    }
