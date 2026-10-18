#include <vector>
#include <string>
#include <iostream>
std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    size_t start = 0;
    for (size_t i = 0; i <= str.size(); ++i) {
        if (i == str.size() || str[i] == delimiter) {
            result.push_back(str.substr(start, i - start));
            start = i + 1;
        }
    }
    return result;
}

int main() {
    std::string str;
    char delimiter;
    std::cin >> str >> delimiter;
    std::vector<std::string> result = Split(str, delimiter);
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;
    }
}