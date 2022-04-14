#include <iostream>
#include <cmath>

int main(){
    //11.Начальный вклад в банк составил А денег.
    //Через сколько месяцев сумма вклада составит В денег, если каждый месяц сумма вклада увеличивается на Х процентов?
    float a, b, x;
    int mes = 0;
    std::cin>>a>>b>>x;
    while(a <= b){
        std::cout<<a<<" "<<mes<<std::endl;
        a=a+x;
        mes++;
    }
}
