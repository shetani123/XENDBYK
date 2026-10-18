#include <iostream>
#include <vector>
#include <string>
#include <utility>
std::pair<size_t, size_t> MatrixArgMax(const std::vector<std::vector<int>>& matrix) {
    std::pair<size_t, size_t> result = {0, 0};
    long long maxi = matrix[0][0];
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            if (maxi < matrix[i][j]) {
                maxi = matrix[i][j];
                result.first = i;
                result.second = j;
            }
        }
    }
    return result;
}

int main() {
    int n,k;
    std::cin >> n >> k;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(k));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    auto [i,j] = MatrixArgMax(matrix);
    std::cout << i << " " << j << "\n";
    return 0;
}
