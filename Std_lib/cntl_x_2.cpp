#include <iostream>
#include <list>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::list<std::string> a;
    std::string cmd;

    while (getline(std::cin, cmd)) {
        if (cmd.empty()) break;
        a.push_back(cmd);
    }

    auto it = a.begin();
    auto shift_it = it;
    int shift_c = 0;

    bool shift = false;
    std::list<std::string> shift_b;

    while (std::cin >> cmd) {
        if (cmd == "Shift") {
            shift = !shift;
            if (shift) {
                shift_it = it;
                shift_c = 0;
            }
        }
        else if (cmd == "Down") {
            if (it != a.end()) {
                ++it;
                if (shift) shift_c++;
            }
        }
        else if (cmd == "Up") {
            if (it != a.begin()) {
                --it;
                if (shift) shift_c--;
            }
        }
        else if (cmd == "Ctrl+X") {
            if (shift && shift_c != 0) {
                shift_b.clear();
                auto from = shift_it;
                auto to = it;
                if (shift_c < 0) {
                    from = it;
                    to = shift_it;
                }
                for (auto cur = from; cur != to; ++cur) {
                    shift_b.push_back(*cur);
                }
                it = a.erase(from, to);
            }
            else {
                if (it != a.end()) {
                    shift_b.clear();
                    shift_b.push_back(*it);
                    it = a.erase(it);
                }
            }
            shift = false;
            shift_c = 0;
        }
        else if (cmd == "Ctrl+V") {
            if (!shift_b.empty()) {
                if (shift && shift_c != 0) {
                    auto from = shift_it;
                    auto to = it;
                    if (shift_c < 0) {
                        from = it;
                        to = shift_it;
                    }
                    it = a.erase(from, to);
                }
                for (const auto& i : shift_b) {
                    a.insert(it, i);
                }
            }
            shift = false;
            shift_c = 0;
        }
    }
    for (const auto& i : a) {
        std::cout << i << "\n";
    }
    return 0;
}