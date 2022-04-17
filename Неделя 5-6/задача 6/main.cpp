#include <iostream>
#include <cmath>

int main(){
    //Пользователь задаёт число Ч и Х. Посчитать y:
    //H. y = (x^1)/1! - (x^3)/3! + (x^5)/5! - ... (x^n)/n!
    float x,y;
    y=0;
    int n;
    int start=1;
    int mn = 1;
    float ch;
    std::cin>>n>>x;
    while(start <=n){
        int zn = 1;
        for(int i = 1;i<=start;i++){
            zn = zn * i;
        }
        ch = (pow(x,start)/zn)*mn;
        y = y + ch;
        std::cout<<ch<<"\t"<<y<<std::endl;
        start = start +2;
        mn = mn*(-1);
    }
    if ((start - n) == 1){
        int zn = 1;
        for(int i = 1;i<=n;i++){
            zn = zn * i;
        }
        float dop_ch = (pow(x,n)/zn)*mn;
        y = y + dop_ch;
        std::cout<<y;
    }
    else
        std::cout<<y;
}
