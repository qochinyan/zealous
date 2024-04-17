#include <iostream>

void findNum(int array[],int number,int length);

int main()
{
    int length, number;
    std::cout<<"input length of array - ";
    
    std::cin >> length;
    int array[length];
    for(int i = 0;i<length;i++){
        std::cout<<"input array item "<<i+1<<" - ";
        std::cin >> array[i];
    }    
    std::cout<<"input number you want to find - ";
    std::cin >>  number;
    findNum(array,number,length);
    return 0;
}

void findNum(int array[],int number,int length){
    for(int i = 0;i < length;i++){
        for(int j = i + 1;j<length;j++){
            if(array[i]+array[j] == number){
                std::cout <<std::endl<< "the numbers are " << array[i] <<" and "<< array[j] << std::endl;
                return;
            }   
        }
    }
}