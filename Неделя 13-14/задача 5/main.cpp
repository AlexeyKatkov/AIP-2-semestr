#include <iostream>
#include <cmath>



//3.Вычислить сумму нечётных/чётных элементов массива
void watchMatrix(int ar[],int n){

    for (int i = 0;i<n;i++){
            std::cout<<ar[i]<<"\t";
        }
        std::cout<<"\n";

}
void count(int ar[],int n){
    int sum_ch,sum_nech =0;
    for (int i = 0;i<n;i++){
            if (ar[i] % 2 == 0) sum_ch+=ar[i];
            else sum_nech+=ar[i];
        }
    std::cout<<"Сумма нечетных элементов массива: "<<sum_nech
            <<"\nСумма четных элементов массива: "<<sum_ch;

}
int main(){
    const int n = 10;
    int ar[n];
    for (int i = 0;i<10;i++){
            ar[i]=100-rand()%201;
    }
    watchMatrix(ar,n);
    count(ar,n);




}
