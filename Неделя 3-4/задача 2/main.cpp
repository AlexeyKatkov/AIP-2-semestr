#include <iostream>
#include <cmath>
int main(){
    //Дана функция y=f(x). Найти значение функции по x. (H.) y=2x-10, x>3
    //y=10, x =3
    //y = (2x+1)^2 - 1, x <3
    float x;
    std::cout << "Enter x: ";
    std::cin >> x;
    float y1= 2*x -10;
    float y2=(2*x + 1)*(2*x + 1) - 1;

    if (x > 3)
        std::cout<<"y=2x-10"<<std::endl
                <<"y = "<<y1;
    if (x == 3)
        std::cout <<"y = " << 10;
    if (x < 3)
        std::cout<<"y=(2x-10)^2 - 1"<<std::endl
                <<"y = "<<y2;

}
