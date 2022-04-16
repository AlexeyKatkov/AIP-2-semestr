#include <iostream>
#include <cmath>
int main(){
    // Вывести на экран Н строк из нулей, причем количество нулей в каждой строке равно номеру строки. Количество строк Н вводит пользователь
    int n;
    std::cin>>n;
    std::cout<<std::endl;
    for (int i =0;i<n;i++){
        for (int i1 =0; i1 <=i;i1++){
            std::cout << "0";
        }
        std::cout <<std::endl;
    }
    return 0;
}
