#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n; std::cin >> n;
    std::vector<int> prom(n);
    std::vector<int> start(n);
    std::vector<int> end(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prom[i];
        start[i] = prom[i];
    }
    std::sort(prom.begin(), prom.end());
    for (int i = 0; i <= n; ++i) {
        end[start[i]-1] = prom[i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << end[i] << " ";
    }
    return 0;
}