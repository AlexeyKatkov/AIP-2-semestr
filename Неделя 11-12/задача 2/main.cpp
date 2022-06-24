#include <iostream>

//Напишите функцию, которая будет возвращать комплексно-сопряжённое число.
struct complexus{
    int real_num;
    int im_num;

};
void conjugate(complexus &num){
    num.im_num *= -1;
    std::cout<<"комплексно-сопряжённое число:\n";
    if (num.im_num >= 0) std::cout << num.real_num << " + " << num.im_num<< "j\n";
    else std::cout << num.real_num << " " << num.im_num<< "j\n";
}


void fillNum(complexus &num){
    num = {101-rand()%101,101-rand()%101};
    if (num.im_num >= 0) std::cout << num.real_num << " + " << num.im_num<< "j\n";
    else std::cout << num.real_num << " " << num.im_num<< "j\n";
}

int main(){
    complexus NewNum;
    fillNum(NewNum);
    conjugate(NewNum);




}
