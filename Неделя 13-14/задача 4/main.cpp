#include <iostream>
#include <cmath>



//9.Посчитать количество элементов массива, больших нуля
void watchMatrix(int ar[],int n){

    for (int i = 0;i<n;i++){
            std::cout<<ar[i]<<"\t";
        }
        std::cout<<"\n";

}
void count(int ar[],int n){
    int c =0;
    for (int i = 0;i<n;i++){
            if (ar[i] > 0) c++;
            else continue;
        }
    std::cout<<"В массиве "<<c<<" элементов больших нуля";

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
