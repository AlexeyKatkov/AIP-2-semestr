#include <iostream>
#include <cmath>
int main(){
    //2. Протабулировать функцию(шаг и диапазон задаётпользователь):
    //h. y = -(5+4x)^2+ 8x
    float n, x1, x2;

    std::cout << "Введите диапозон(начальное и конечное значение): ";
    std::cin>>x1>>x2;
    std::cout << "Введите шаг: ";
    std::cin>>n;

    while (x1 <= x2){
        float y = -1*((5+4*x1)*(5+4*x1))+8*x1;
        std::cout <<"y = " << y << "\t" << "x = " << x1 << std::endl;
        x1 += n;

    }
    return 0;
}
