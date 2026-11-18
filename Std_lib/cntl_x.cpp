#include <iostream>
#include <list>
#include <string>
int main() {
    std::list<std::string> a;
    std::string cmd;
    while (getline(std::cin, cmd)) {
        if (cmd.empty()) break;
        a.push_back(cmd);
    }
    auto it = a.begin();
    std::string s;
    while (std::cin >> cmd) {
        if (cmd == "Down") {
            if (it != a.end()) ++it;
        } else if (cmd == "Up") {
            if (it != a.begin()) --it;
        } else if (cmd == "Ctrl+X") {
            if (it != a.end()) {
                s = *it;
                it = a.erase(it);
            }
        } else if (cmd == "Ctrl+V") {
            if (!s.empty()) a.insert(it, s);
        }
    }
    for (const auto& i : a) {
        std::cout << i << "\n";
    }
    return 0;
}