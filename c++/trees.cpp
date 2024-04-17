#include <iostream>

void drawTreeLeft(int length){
    for(int i = 0;i < length;i++){
        for(int j = 0;j < length;j++){
            if(j<i+1){
               std::cout<<"*";
            }else{
                break;
            }
        }  

        std::cout<<std::endl;
    }
}

void drawTreeRight(int length){
    for(int i = 0;i < length;i++){
        for(int j = 0;j < length;j++){
            if(j+i>=length-1){
               std::cout<<"*";
            }else{
                std::cout<<" ";
            }
        }  
        std::cout<<std::endl;
    }
}

void drawTreeCenter(int length){
    for(int i = 0;i < length;i++){
        for(int j = 0;j < length;j++){
            if((j+i>((length)/2)+1)){
               std::cout<<"* ";
            }else{
                std::cout<<" ";
            }
        } 
        std::cout<<std::endl;
    }
}

int main()
{
    int length;
    std::cout<<"input the length"<<std::endl;
    std::cin>>length;  
    std::cout<<std::endl;
    drawTreeLeft(length);
    std::cout<<std::endl<<std::endl;
    drawTreeRight(length);
    std::cout<<std::endl<<std::endl;
    drawTreeCenter(length);
    return 0;
}
