#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
int main() {
    std::string pass;
    std::cin >> pass;
    if (8 <= pass.length() && pass.length() <= 14) {
        if (std::all_of(pass.begin(), pass.end(), [](char c) { return c >= 33 && c <= 126; })) {
            if ((std::any_of(pass.begin(), pass.end(), [](char c) { return std::islower(c); }) +
                std::any_of(pass.begin(), pass.end(), [](char c) { return std::isupper(c); }) +
                std::any_of(pass.begin(), pass.end(), [](char c) { return std::ispunct(c); }) +
                std::any_of(pass.begin(), pass.end(), [](char c) {return std::isdigit(c); })) >=3) {
                    std::cout << "YES";
                    return 0;
            }
        }
    }
    std::cout << "NO";
    return 0;
}