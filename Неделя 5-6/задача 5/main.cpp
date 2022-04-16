#include <iostream>
#include <cmath>

int main(){
    //11.Начальный вклад в банк составил А денег.
    //Через сколько месяцев сумма вклада составит В денег, если каждый месяц сумма вклада увеличивается на Х процентов?
    float a, b, x;
    int mes = 0;
    std::cin>>a>>b>>x;
    while(a <= b){
        a=a*(1+x*0.01);
        mes++;
        std::cout<<a<<" "<<mes<<std::endl;

    }
}
