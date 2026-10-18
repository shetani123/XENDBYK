#include <iostream>
#include <vector>
#include <string>

std::string Join(const std::vector<std::string>& tokens, char delimiter) {
    if (tokens.empty()) return "";
    std::string result = "";
    for (size_t i = 0; i < tokens.size(); ++i) {
        result += tokens[i];
        if (i == tokens.size() - 1) break;
        result += delimiter;
    }
    return result;
}

int main() {
    std::vector<std::string> tokens = {"What", "is", "your", "name?"};
    char delimiter = '_';
    std::string result = Join(tokens, delimiter);
    std::cout << result << std::endl;
}