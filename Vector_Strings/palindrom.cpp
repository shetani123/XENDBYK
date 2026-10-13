#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string s;
    std::getline(std::cin, s);
    s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
    int left = 0;
    int right = static_cast<int>(s.length()) -1;
    while (left < right) {
        if (s[left] != s[right]) {
            std::cout << "NO";
            return 0;
        }
        left++;
        right--;
    }
    std::cout << "YES";
    return 0;
}