#include <iostream>
#include <cmath>
void ShiftRight3(float& A,float& B,float& C);

int main(){
//Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг:
//значение  A  переходит  в  B,  значение  B —в  C,  значение  C— в  A
//(A,  B,  C —вещественные параметры, являющиеся одновременновходными и выходными).
//С помощью этой процедуры выполнить правый циклический сдвиг для двух данных
    float a,b,c;
    std::cin>>a>>b>>c;
    ShiftRight3(a,b,c);
    std::cout<<a<<" "<<b<<" "<<c;


}
void ShiftRight3(float& A,float& B,float& C){
    float A1 = A;
     A = C;
     C = B;
     B = A1;
}
