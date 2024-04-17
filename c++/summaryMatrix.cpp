#include <iostream>

void calc(int first[][50], int second[][50], int length) {
    
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            std::cout <<first[i][j] + second[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int length;
    std::cout << "Enter the length of matrix - ";
    std::cin >> length;

    int first[50][50];
    
    std::cout << "first matrix"<<std::endl;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            std::cout << "Enter " << i+1 << "-th row, " << j+1 << "-th col element";
            std::cin >> first[i][j];
       
        }
    }
    std::cout << std::endl<<"second matrix"<<std::endl;
    int second[50][50];

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            std::cout << "Enter " << i+1 << "-th row, " << j+1 << "-th col element";
            std::cin >> second[i][j];
        }
    }

    calc(first, second, length);
    
    return 0;
}

