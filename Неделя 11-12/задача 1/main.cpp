#include <iostream>

//d.Написать функцию, которая возвращает количество минут в заданной переменной типа «время».
struct time {
    int hours;
    int minuts;
    int second;
};
void showMinuts(time tim){
    std::cout<<tim.minuts;

}

int main(){
    time NewTime = {rand()%24,rand()%59,rand()%59};
    showMinuts(NewTime);

}
