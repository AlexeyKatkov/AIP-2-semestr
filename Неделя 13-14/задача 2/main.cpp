#include <iostream>
#include <cmath>



//2. Вычислить сумму элементов массива: b. больших 9,меньших 20, меньших 3
void watchMatrix(int ar[10]){
    for (int i = 0;i<10;i++){
            std::cout<<ar[i]<<"\t";
        }
        std::cout<<"\n";

}
void sum_b9(int ar[10]){
    int sum = 0;
    for (int i = 0;i<10;i++){
        if (ar[i] > 9) sum=+ar[i];
        else continue;
        }
    std::cout<<"Сумма элементов больших 9 равна "<<sum<<"\n";


}
void sum_m20(int ar[10]){
    int sum = 0;
    for (int i = 0;i<10;i++){
        if (ar[i] < 20) sum=+ar[i];
        else continue;
        }
    std::cout<<"Сумма элементов меньших 20 равна "<<sum<<"\n";

}
void sum_m3(int ar[10]){
    int sum = 0;
    for (int i = 0;i<10;i++){
        if (ar[i] < 3) sum=+ar[i];
        else continue;
        }
    std::cout<<"Сумма элементов меньших 3 равна "<<sum<<"\n";

}
int main(){

    int ar[10];
    for (int i = 0;i<10;i++){
            ar[i]=rand()%101;
    }
    watchMatrix(ar);
    sum_b9(ar);
    sum_m20(ar);
    sum_m3(ar);


}
