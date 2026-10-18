#include <vector>
#include <vector>
#include <iostream>
#include <utility>
#include <cmath>
int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int,int>> matrix(n);
    for (int i = 0; i < n; i++) {
        std::cin >> matrix[i].first >> matrix[i].second;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (sqrt(pow(matrix[j].first, 2) + pow(matrix[j].second,2)) >
            sqrt(pow(matrix[j+1].first, 2) + pow(matrix[j+1].second, 2))) {
                std::pair<int,int> temp = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << matrix[i].first << " " << matrix[i].second << "\n";
    }
}