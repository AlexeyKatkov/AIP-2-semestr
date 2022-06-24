#include <iostream>


//2.Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки.
void showmatrix(int ar[4][4]){

    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cout <<ar[i][j]<< "\t";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}

int main(){
    int ar[4][4];
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            ar[i][j]=rand()%101;

        }
    }
    showmatrix(ar);
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            if (j == 1) continue;
            else ar[i][j]=ar[i][j]*ar[i][1];

        }
    }
    showmatrix(ar);
}
