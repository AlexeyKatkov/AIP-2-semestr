#include <iostream>
#include <cmath>
int main(){
    //2. Протабулировать функцию(шаг и диапазон задаётпользователь):
    // P. y = sqrt(5-3/x) + 11*x + 1/tan(2*x+15)
    float n, x1, x2;

    std::cout << "Введите диапозон(начальное и конечное значение): ";
    std::cin>>x1>>x2;
    std::cout << "Введите шаг: ";
    std::cin>>n;

    while (x1 <= x2){
        float y = sqrt(5-3/x1) + 11*x1 + 1/tan(2*x1+15);

        if (( tan(2.0*x1+15) == 0.0) || (x1 == 0.0) || (5-3/x1) < 0)
            std::cout << "Error"<< std::endl;

        else{

            std::cout <<"y = " << y << "\t" << "x = " << x1 << std::endl;
        }
        x1 += n;

    }
    return 0;
}
