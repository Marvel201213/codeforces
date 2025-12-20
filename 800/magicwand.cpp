#include <iostream>
#include <string>
#include <vector>

int main() {
    int cases;
    std::cin >> cases;
    for (int TEST = 0; TEST < cases; ++TEST) {
        int n;
        std::cin >> n;
        std::vector<int> toys;
        int i =0;
        while (i < n) {
            int toy;
            std::cin >> toy;
            toys.emplace_back(toy);
            i+=1;
        }
        i =0;
        while (i < n) {
            int swapper = toys[i];
            int j = i+1;
            while (j < n) {
                if (toys[j] < swapper && toys[j]%2 != swapper%2) {
                    toys[i] = toys[j];
                    toys[j] = swapper;
                    swapper = toys[i];
                }
                j+=1;
            }
            i+=1;
        }
        int l = 0;
        while (l < n) {
            std::cout << toys[l];
            if (l < n-1) {
                std::cout << " ";
            }
            l+=1;
        }
        if (TEST < cases-1) {
            std::cout << "\n";
        }
    }
    
}
