#include <iostream>
#include <string>
template <typename Cont>
void Print(const Cont& data, std::string delimiter) {
    bool first = true;
    for (const auto& elem : data) {
        if (!first) std::cout << delimiter;
        std::cout << elem;
        first = false;
    }
}


int main() {
    std::vector<int> data = {1, 2, 3, 4};
    Print(data, ", ");  // 1, 2, 3, 4
}