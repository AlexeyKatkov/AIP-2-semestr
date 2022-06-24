#include <iostream>
#include <cmath>



//10.Реализовать вычисление матричных норм из списка выше (можно для квадратных матриц).
void watchMatrix(int ar[6][6]){
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){

            std::cout<<ar[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
void L1norm(int ar[6][6]){

    int max=0;
    int max1=0;
    for (int j = 0;j<6;j++){
        max1=0;
        for (int i = 0;i<6;i++){
            max1=+abs(ar[i][j]);
        }
        if (max1>max) max = max1;
    }
    std::cout<<"|A|1 = "<<max<<"\n";

}
void Linfnorm(int ar[6][6]){

    int max=0;
    int max1=0;
    for (int i = 0;i<6;i++){
        max1=0;
        for (int j = 0;j<6;j++){
            max1=+abs(ar[i][j]);
        }
        if (max1>max) max = max1;
    }
    std::cout<<"|A|inf = "<<max<<"\n";

}
void Anorm(int ar[6][6]){

    int max=0;
    for (int i = 0;i<6;i++){

        for (int j = 0;j<6;j++){
            if (max<(abs(ar[i][j]))) max = abs(ar[i][j]);
        }

    }
    std::cout<<"|A| = "<<max<<"\n";

}

int main(){

    int ar[6][6];
    for (int i = 0;i<6;i++){
        for (int j = 0;j<6;j++){
            ar[i][j]=100-rand()%201;

        }
    }
    watchMatrix(ar);
    L1norm(ar);
    Linfnorm(ar);
    Anorm(ar);



}
