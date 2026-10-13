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
    std::sort(start.rbegin(), start.rend());
    for (size_t i = 0; i < start.size(); i++) {
        std::cout << start[i] << "\n";
    }
}