#include <iostream>
#include <cmath>
float ax = 0;
void procent(float x1,float vklad);
int main(){
    //11.Начальный вклад в банк составил А денег.
    //Через сколько месяцев сумма вклада составит В денег, если каждый месяц сумма вклада увеличивается на Х процентов?
    float a, b, x;

    int mes = 0;
    std::cin>>a>>b>>x;
    while(a <= b){
        procent(x,a);
        a=a+ax;
        mes++;
        std::cout<<a<<" "<<mes<<std::endl;

    }
}
void procent(float x1,float vklad){
    ax = (vklad * 0.01 * x1);
}
