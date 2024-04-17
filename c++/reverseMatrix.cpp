#include <iostream>

void reverse(int matrix[][10], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout <<  std::endl;
    }
}

int main() {
    int length;
    std::cout << "length - ";
    std::cin >> length;

    int matrix[10][10];

    for (int i = 0; i < length;i++) {
        for (int j = 0; j < length;j++) {
            std::cout << "Enter " << i+1 << "-th row, " << j+1 << "-th col element - ";
            std::cin >> matrix[i][j];
        }
    }

    reverse(matrix, length);

    return 0;
}
