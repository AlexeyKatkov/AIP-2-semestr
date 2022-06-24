#include <iostream>
#include <cmath>



//1. Сгенерировать массив со случайными числами в диапазоне: h.[0,100]
void watchMatrix(int ar[10]){
    for (int i = 0;i<10;i++){
            std::cout<<ar[i]<<"\t";
        }
        std::cout<<"\n";

}
int main(){

    int ar[10];
    for (int i = 0;i<10;i++){
            ar[i]=rand()%101;
    }
    watchMatrix(ar);


}
