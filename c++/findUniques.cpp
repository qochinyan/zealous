#include <iostream>

void findUniques(int matrix[][100], int length);

int main() {
    int length;
    std::cout << "Enter length of Array - ";
    std::cin >> length;

    while (std::cin.fail()) {
        std::cout << "errpr, use correct type";
        std::cin.clear();
        std::cin.ignore();
        std::cin >> length;
    }

    int matrix[100][100];

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            std::cout << "Enter " << i + 1 << "-th row, " << j + 1 << "-th column element (less than 300) - ";
            std::cin >> matrix[i][j];
            while (std::cin.fail()) {
                std::cout << "error, use correct type";
                std::cin.clear();
                std::cin.ignore();
                std::cin >> matrix[i][j];
            }
        }
    }
    findUniques(matrix, length);

    return 0;
}

void findUniques(int matrix[][100], int length) {
    int checking[300] = {0}; 

    for (int i = 0; i < length;i++) {
        for (int j = 0; j < length; j++) {
            checking[matrix[i][j]]++;
        }
    }

    std::cout << "Nonrepeatig numbers of the matrix - ";
    for (int i = 0; i < 300; i++) { 
        if (checking[i] == 1) {
            std::cout << i << " ";
        }
    }
}