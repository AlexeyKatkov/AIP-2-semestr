#include <iostream>


//3.Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести данные о самом маленьком роботе.

struct robot{
    int height;
    int width;
    int length;
    int weight;
    int maxspeed;
};

void fillvalues (robot &rob,int n){
    std::cout<<"Введите данные о "<<n<<"-ом роботе\n";
    std::cout<<"Введите габариты робота\nВысота: ";
    std::cin>>rob.height;
    std::cout<<"\nШирина: ";
    std::cin>>rob.width;
    std::cout<<"\nДлина: ";
    std::cin>>rob.length;
    std::cout<<"\nВведите вес робота: ";
    std::cin>>rob.weight;
    std::cout<<"\nВведите максимальную скорость работа: ";
    std::cin>>rob.maxspeed;
}
void watchInfo(robot &rob){
    std::cout<<"Информация о роботе\n";
    std::cout<<"Высота: "<< rob.height;
    std::cout<<"\nШирина: "<<rob.height;
    std::cout<<"\nДлина: "<<rob.length;
    std::cout<<"\nВес: "<<rob.weight;
    std::cout<<"\nМаксимальная скорость: "<< rob.maxspeed;
}
void maxvaldev(robot &rob1,robot &dev2){
    if (( rob1.height*rob1.height*rob1.length) > ( rob2.height*rob2.height*rob2.length)) watchInfo(rob1);
    else watchInfo(rob2);
}
int main(){


    robot rob1,rob2;
    fillvalues(rob1,1);
    fillvalues(rob2,2);
    maxvaldev(rob1,rob2);

}
