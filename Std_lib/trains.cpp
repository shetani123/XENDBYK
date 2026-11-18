#include <string>
#include <deque>
#include <iostream>

void MakeTrain() {
    std::deque<int> train;
    std::string move;
    while (std::cin >> move) {
        if (move == "+right") {
            int c;
            std::cin >> c;
            train.push_back(c);
        } else if (move == "+left") {
            int c; std::cin >> c;
            train.push_front(c);
        } else {
            int c; std::cin >> c;
            if (static_cast<size_t>(c) >= train.size()) {
                train.erase(train.begin(), train.end());
            } else if (move == "-right") {
                train.erase(train.end() -c , train.end());
            } else {
                train.erase(train.begin(),train.begin() + c);
            }
        }
    }
    for (int i : train) {
        std::cout << i << " ";
    }
}

int main() {
    MakeTrain();
}
