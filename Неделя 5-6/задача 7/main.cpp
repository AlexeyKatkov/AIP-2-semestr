#include <iostream>
#include <cmath>

int main(){
    //Пользователь задаёт число n и x. Посчитать y:
    //b. y = 1/x + 1/2*x + 1/3*x +...+1/n*x
    float x,y;
    y=0;
    int n;
    std::cin >> n>> x;
    for (int i =1;i<=n;i++){
        float ch = 1/(i*x);
        y = y + ch;
    }
}
