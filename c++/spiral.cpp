#include <iostream>


void spiral(int matrix[][50], int length) {
    std::cout << std::endl;
    int top = 0, bottom = length - 1, left = 0, right = length - 1;
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
    int matrix[50][50];
    int length;

    std::cout << "Enter the length of the matrix: ";
    std::cin >> length;

    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            std::cin >> matrix[i][j];
        }
    }



   
    spiral(matrix, length);

    return 0;
}
