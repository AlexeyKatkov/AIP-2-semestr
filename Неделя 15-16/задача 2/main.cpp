#include <iostream>


//4.В квадратной матрице найти сумму положительных элементов,
//лежащих на и выше главной диагонали и расположенных в чётных столбцах.
void watchMatrix(int ar[6][6]){
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){

            std::cout<<ar[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
int main(){
    int ar[6][6];
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){
            ar[i][j]=100-rand()%201;
        }
    }
    watchMatrix(ar);
    int sum = 0;
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){
            if (i==j) continue;
            else{
                if (ar[i][j] > 0) sum += ar[i][j];
                else continue;
            }
        }
    }
    std::cout <<"\n"<< sum;

}
