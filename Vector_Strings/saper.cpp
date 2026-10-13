#include <iostream>
#include <vector>

int main() {
    int m,n,k;
    std::cin >> m >> n >> k;
    std::vector<std::vector<int>> pole(m,std::vector<int>(n,0));
    for (int i = 0; i < k; i++) {
        int row,col;
        std::cin >> row >> col;
        row--; col--;
        pole[row][col] = -1;
        if (row - 1 >= 0)
            if (pole[row - 1][col] != -1) pole[row - 1][col] += 1;
        if (row - 1 >= 0 && col - 1 >= 0)
            if (pole[row - 1][col - 1] != -1) pole[row - 1][col - 1] += 1;
        if (row - 1 >= 0 && col + 1 < n)
            if (pole[row - 1][col + 1] != -1) pole[row - 1][col + 1] += 1;
        if (col - 1 >= 0)
            if (pole[row][col - 1] != -1) pole[row][col - 1] += 1;
        if (col + 1 < n)
            if (pole[row][col + 1] != -1) pole[row][col + 1] += 1;
        if (row + 1 < m)
            if (pole[row + 1][col] != -1) pole[row + 1][col] += 1;
        if (row + 1 < m && col - 1 >= 0)
            if (pole[row + 1][col - 1] != -1) pole[row + 1][col - 1] += 1;
        if(row + 1 < m && col + 1 < n)
            if (pole[row + 1][col + 1] != -1) pole[row + 1][col + 1] += 1;

    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (pole[i][j] != -1) {
                std::cout << pole[i][j] << " ";
            }
            else std::cout << "*" << " ";
        }
        std::cout << "\n";
    }
}