#include <iostream>

void drawTreeFibonacii(int length){
    
   for(int i = 0;i < length;i++){
       int fiboArr[2] = {0,1};
       int last = 0;
        for(int j = 0;j < length;j++){
            if(j<i+1){
               std::cout<<fiboArr[1]<<" ";
               last = fiboArr[0];
               fiboArr[0] = fiboArr[1];
               fiboArr[1] = last+fiboArr[1];
            }else{
                break;
            }
        }  
        
        std::cout<<std::endl;
    }
}

int main()
{
    int length;
    std::cout<<"input the length"<<std::endl;
    std::cin >> length;
    std::cout<<std::endl<<std::endl;
    drawTreeFibonacii(length);
    return 0;
}