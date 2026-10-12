#include <iostream>
#include <string>
#include <algorithm>

void zov(char c, std::string *end) {
    if (c == 'b' || c == 'f' || c == 'p' || c == 'v') *end += '1';
    else if (c == 'c' || c == 'g' || c == 'j' || c == 'k' ||
        c == 'q' || c == 's' || c == 'x' || c == 'z') *end += '2';
    else if ( c == 'd' || c == 't') *end +='3';
    else if (c == 'l') *end += '4';
    else if (c == 'm' || c == 'n') *end +=  '5';
    else if (c == 'r') *end += '6';
};
bool zov1(char c) {
    if (c == 'a' || c == 'e' || c == 'h' || c == 'i' || c == 'o' || c == 'u' || c == 'w' || c == 'y') return true;
    return 0;
};

int main() {
    std::string start,end = "";
    std::cin >> start;
    end += start[0];
    start.erase(0,1);
    for (size_t i = 0; i < start.length(); i++) {
        if (zov1(start[i])) {
            start.erase(i,1);
        }
    }
    for (char c : start) {
        zov(c,&end);
    }
    auto uniq = std::unique(end.begin(), end.end());
    end.erase(uniq, end.end());
    while (end.length() <4) {
        end += '0';
    }

    std::cout << end.substr(0,4);
    return 0;
}


