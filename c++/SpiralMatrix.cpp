#include <iostream>

const int MAX_SIZE = 10;

void printSpiralMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++)
            std::cout << matrix[top][j] << " ";
        top++;
        
        for (int i = top; i <= bottom; i++)
            std::cout << matrix[i][right] << " ";
        right--;
        
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                std::cout << matrix[bottom][j] << " ";
            bottom--;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                std::cout << matrix[i][left] << " ";
            left++;
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    std::cout << "Enter the number of rows in the matrix: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns in the matrix: ";
    std::cin >> cols;

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Original matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Spiral output: ";
    printSpiralMatrix(matrix, rows, cols);

    return 0;
}
