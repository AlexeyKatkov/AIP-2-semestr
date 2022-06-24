#include <iostream>
#include <cmath>



//14.Создать новый массив из двух других массивов путём операций над элементами массивов: d.деления
template <typename T>
void watchMatrix(T ar[],int n){

    for (int i = 0;i<n;i++){
            std::cout<<ar[i]<<"\t";
        }
        std::cout<<"\n";

}
void newAr(int ar1[],int ar2[],float ar3[],int n){

    for (int i = 0;i<n;i++){
            float n = ar1[i];
            ar3[i]=n/ar2[i];

        }


}
int main(){
    const int n = 10;
    int ar1[n],ar2[n];
    float ar3[n];
    for (int i = 0;i<10;i++){
            ar1[i]=100-rand()%201;
            ar2[i]=100-rand()%201;
    }
    std::cout<<"Первый массив:\n";
    watchMatrix(ar1,n);
    std::cout<<"Второй массив:\n";
    watchMatrix(ar2,n);
    newAr(ar1,ar2,ar3,n);
    std::cout<<"Третий массив:\n";
    watchMatrix(ar3,n);




}
