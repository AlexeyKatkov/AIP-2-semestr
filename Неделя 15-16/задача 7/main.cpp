#include <iostream>
#include <cmath>



//12.Сосчитать количество чёрных пятен  на белой шкуре. Шкуру представить в виде 0 и 1 матрицы, где 0 -белый, а 1 -чёрный цвет.
void watchMatrix(int ar[6][6]){
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){

            std::cout<<ar[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
void searchpyatna(int ar[6][6]){
    int count = 0;
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){
            if (ar[i][j] == 1) count=+1;
            else continue;
        }

    }
    std::cout<<"На белой шкуре "<<count<<" чёрных пятен";

}
int main(){

    int ar[6][6];
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){
            ar[i][j]=rand()%2;

        }
    }
    watchMatrix(ar);
    searchpyatna(ar);

}
