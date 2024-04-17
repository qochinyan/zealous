#include <iostream>

#define min(a,b) ((a) <= (b) ? (a) : (b))
#define max(a,b) ((a) >= (b) ? (a) : (b))

void getMinMax(int length,int arr[]){

    std::cout <<"input " <<1<< "-th item"<<std::endl;
    std::cin >> arr[0];
    int max = arr[0];
    int min = arr[0];
    for(int i = 1;i < length;i++){
      
      std::cout <<"input " <<i+1<< "-th item"<<std::endl;
      std::cin >> arr[i];
      min = min(min,arr[i]);
      max = max(max,arr[i]);
    }
    std::cout <<std::endl;
    std::cout <<"min number is "<< min << std::endl;
    std::cout <<"max number is "<< max << std::endl;
}

int main()
{
    int arr[5];
    int length = sizeof(arr) / 4;
    getMinMax(length,arr);

    return 0;
}
