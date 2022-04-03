#include <iostream>
#include <cmath>
int main(){
    //5.Напишите программу,  которая  принимает  от  пользователя  координаты  точки  и определяет, попала ли точка в заштрихованную область.
    //Б


    float x,y;
    std::cout << "Введите x, y: ";
    std::cin >> x >> y;
    float r = sqrt(x*x+y*y);

    if ( (r < 1) && (y < x/2) )
         std::cout<< "Точка попадает" ;
    else
        std::cout<< "Точка не попадает" ;

    return 0;
}
