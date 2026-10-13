#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main() {
    std::vector<std::string> start(5);
    std::string s;
    while (std::getline(std::cin, s)) {
        start.push_back(s);
    }
    for (size_t i = 0; i < start.size(); i++) {
        for (size_t j = 0; j < start.size()-1; j++) {
            if (start[j] > start[j+1]) {
                std::string temp = start[j];
                start[j] = start[j+1];
                start[j+1] = temp;
            }
        }
    }
    std::reverse(start.begin(), start.end());
    for (size_t i = 0; i < start.size(); i++) {
        std::cout << start[i] << "\n";
    }
}