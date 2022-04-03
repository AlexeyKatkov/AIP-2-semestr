#include <iostream>
#include <cmath>
int main(){
    //3.Напишите программу,  которая  принимает  от  пользователя  координаты  точки  и определяет, попала ли точка в заштрихованную область.
    //A
    //y = 2x -10, если x > 0
    //y = 0, если x = 0
    //y = 2 * |x| -1, если x < 0

    float x;
    std::cout << "Введите x: ";
    std::cin >> x;
    if (x>0)
        std::cout << "y = 2x - 10"<<std::endl<<"y = "<<2*x -10;
    if(x==0)
        std::cout << "y = 0";
    if (x<0)
        std::cout << "y = 2 * |x| - 1"<< std::endl << "y = " << 2*(abs(x)) - 1;



}
