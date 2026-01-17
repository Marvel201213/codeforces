#include <vector>
#include <iostream>
#include <algorithm>
#include <tuple>
std::tuple<std::vector<int>, std::vector<int>> split(std::vector<int> input) {
    if (input.size() <= 1) {
        return std::tuple<std::vector<int>, std::vector<int>>(input, std::vector<int>{});
    }
    int n = input.size()/2;
    std::vector<int> first= std::vector<int>(input.begin(), input.begin()+n);
    std::vector<int> second= std::vector<int>(input.begin()+n, input.end());
    return std::tuple<std::vector<int>, std::vector<int>>(first,second);
}

void print(std::vector<int> numbers) {
    for (int i: numbers) {
        std::cout << i << " ";
    }
    std::cout << '\n';
}

std::vector<int> merge(std::tuple<std::vector<int>, std::vector<int>> input) {
    if (std::get<0>(input).size() == 0) {
        return std::get<1>(input);
    }
    else if (std::get<1>(input).size() == 0) {
        return std::get<0>(input);
    }
    std::vector<int> output;
    int l = 0;
    int r = 0;
    while (l < std::get<0>(input).size() && r < std::get<1>(input).size()) {
        if (std::get<0>(input)[l] < (std::get<1>(input)[r])) {
            output.emplace_back(std::get<0>(input)[l]);
            l+=1;
        } 
        else {
            output.emplace_back(std::get<1>(input)[r]);
            r+=1;
        }
    }
    while(l < std::get<0>(input).size()) {
        output.emplace_back(std::get<0>(input)[l]);
        l+=1;
    }
    while(r < std::get<1>(input).size()) {
        output.emplace_back(std::get<1>(input)[r]);
        r+=1;
    }
    return output;
    
}
std::vector<int> sort(std::vector<int> input) {
    if (input.size()<=1) {
        return input;
    }
    std::tuple<std::vector<int>, std::vector<int>> splitted = split(input);
    return merge(std::tuple<std::vector<int>, std::vector<int>>(sort(std::get<0>(splitted)), sort(std::get<1>(splitted))));
}

int main () {
    std::vector<int> input = {5, 2, -1, 0};
    std::vector<int> output = sort(input);
    print(output);
    return 0;
}