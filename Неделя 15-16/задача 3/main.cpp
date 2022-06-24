#include <iostream>
#include <clocale>


//7.Дана матрица. Элементы первой строки —количество осадков в соответствующий день,
//второй строки —сила ветра в этот день. Найти, был ли в эти дни ураган?
//(ураган —когда самый сильный ветер был в самый дождливый день).
void watchMatrix(int ar[2][5]){
    for (int i = 0;i<2;i++){
        for (int j = 0;j<5;j++){

            std::cout<<ar[i][j]<<"\t";
        }
        std::cout<<"\n";
    }
    std::cout<<"\n";
}
void searchUragan(int ar[2][5]){
    setlocale(LC_ALL,"Russian");
    int day=0;
    int max_wind = ar[1][0];
    for (int j = 1;j<5;j++){
        if (ar[1][j] > max_wind){
            max_wind = ar[1][j];
            day = j;
        }
        else continue;
    }
    int max_water = ar[0][day];
    int max1 = max_water;
    for (int j = 0;j<5;j++){
        if (ar[0][j]>max_water){
            max_water = ar[0][j];
            std::cout<<"Урагана нет";
            break;
        }
    }
    if(max1==max_water){
        std::cout<<"Ураган был в "<<day+1<<"-ой день. Количество осадков - "<<max_water<<" мм. Сила ветра - "<<max_wind<<" м/с.";
    }

}
int main(){
    setlocale(LC_ALL,"Russian");
    int ar[2][5];
    for (int i = 0;i<2;i++){
        for (int j = 0;j<5;j++){
            if (i==0) ar[i][j]=30+rand()%51;
            else ar[i][j]=1+rand()%34;
        }
    }
    watchMatrix(ar);
    searchUragan(ar);

}
