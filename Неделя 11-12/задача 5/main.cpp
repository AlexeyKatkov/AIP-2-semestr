#include <iostream>


//11.Робот-автомобиль описывается как структура с полями: скорость, длительность движения и номер.
//Напишите функцию для расчёта пройденного расстояния.

struct robotcar{
    int speed;
    int time;
    int number;
};

void fillinfocar (robotcar &rc){
    std::cout<<"Введите скорость: ";
    std::cin >> rc.speed;
    std::cout<<"\nВведите длительность движения: ";
    std::cin >> rc.time;
    std::cout<<"\nВведите номер : ";
    std::cin >> rc.number;
}
void distance(robotcar &rc){
    std::cout<<"Дитстанция которую прошёл робот: "<< (rc.speed*rc.time) ;
}
int main(){
    robotcar rc_1;
    fillinfocar(rc_1);
    distance(rc_1);

}
