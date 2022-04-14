#include <iostream>
#include <cmath>
int main(){
    // Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки. Количество строк Н вводит пользователь
    int n;
    std::cin>>n;
    for (int i =0;i<n;i++)
        std::cout << "0"<<std::endl;
    return 0;
}
