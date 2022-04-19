#include <iostream>
#include <cmath>
float Calc(float a,float b,int op);
int main(){
//9.Описать  функцию  Calc(A,  B,  Op)  вещественного  типа,  выполняющую над ненулевыми
//вещественными числами A и B  одну из арифметическихопераций и возвращающую ее результат.
//Вид операции определяется целым параметром Op: 1—вычитание, 2 —умножение, 3 —деление,
//остальные значения —сложение. С помощью  Calc  выполнить  для  данных  A и B операции,
//определяемые  данными целыми N1, N2, N3
    float A, B;
    int Op;
    std::cin>>A>>B;
    std::cout<<"Выберите операцию:\n1 — вычитание\n2 — умножение\n3 — деление\n4 - сложение."<<std::endl;
    std::cin>>Op;
    std::cout<<Calc(A,B,Op);
}
float Calc(float a, float b, int op){

    switch (op) {
    case 1:
        return a-b;
        break;
    case 2:
        return a*b;
        break;
    case 3:
        return a/b;
        break;
    default:
        return a+b;
        break;
    }
}
