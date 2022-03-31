#include "iostream"

int main()
{
    std::cout<<"입력해주세요"<<std::endl;
    int my_number;
    
    std::cin >> my_number;

    if(my_number==4)
         std::cout<<"정답입니다."<<std::endl;
    else
         std::cout<<"정답이 아닙니다."<<std::endl;
}
