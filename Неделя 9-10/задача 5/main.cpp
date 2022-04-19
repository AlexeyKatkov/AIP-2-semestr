#include <iostream>
#include <cmath>

float y(float x);
int main(){
//Реализовать функцию y=f(x) Протабулировать функцию.
//y=5x-10, x>3
//y=1, x=3
//y = 2*|x| - 5, x < 3
    float X;
    std::cin>>X;
    std::cout<<y(X);
}
float y(float x){
    if (x>3)
        return 5*x - 10;
    if (x==3)
        return 1;
    if (x<3)
        return 2*abs(x) -5;
}
