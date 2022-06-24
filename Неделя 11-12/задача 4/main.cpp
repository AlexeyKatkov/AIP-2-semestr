#include <iostream>


//8.Имеется информация о датчиках: диапазон измеряемых значений (min, max), погрешность, максимальная скорость.
//Вывести данные о датчике с наибольшим диапазоном значений.

struct device{
    int maxval;
    int minval;
    int pogreshnost;
    int speed_work;
};

void fillvalues (device &dev,int n){
    std::cout<<"Введите данные о "<<n<<"-ом датчике\n";
    std::cout<<"Введите диапазон измеряемых значений\nМаксимальное значение: ";
    std::cin>>dev.maxval;
    std::cout<<"\nМинимальное значение: ";
    std::cin>>dev.minval;
    std::cout<<"\nВведите погрешность измерений: ";
    std::cin>>dev.pogreshnost;
    std::cout<<"\nВведите максимальную скорость работы датчика: ";
    std::cin>>dev.speed_work;
}
void watchInfo(device &dev){
    std::cout<<"Информация о датчике\n";
    std::cout<<"Максимальное значение: "<< dev.maxval;
    std::cout<<"\nМинимальное значение: "<<dev.minval;
    std::cout<<"\nПогрешность измерений: "<<dev.pogreshnost;
    std::cout<<"\nМаксимальная скорость работы датчика: "<< dev.speed_work;
}
void maxvaldev(device &dev1,device &dev2){
    if (dev1.maxval > dev2.maxval) watchInfo(dev1);
    else watchInfo(dev2);
}
int main(){

    
    device dev1,dev2;
    fillvalues(dev1,1);
    fillvalues(dev2,2);
    maxvaldev(dev1,dev2);

}
