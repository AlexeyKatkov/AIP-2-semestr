#include <iostream>
#include <cmath>



//10.Заменить все отрицательные элементы массива нулями
void watchMatrix(int ar[],int n){

    for (int i = 0;i<n;i++){
            std::cout<<ar[i]<<"\t";
        }
        std::cout<<"\n";

}
void replace(int ar[],int n){

    for (int i = 0;i<n;i++){
            if (ar[i] < 0) ar[i] = 0;
            else continue;
        }


}
int main(){
    const int n = 10;
    int ar[n];
    for (int i = 0;i<10;i++){
            ar[i]=100-rand()%201;
    }
    watchMatrix(ar,n);
    replace(ar,n);
    watchMatrix(ar,n);



}
