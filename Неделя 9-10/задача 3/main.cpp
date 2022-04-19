#include <iostream>
#include <cmath>
void IncTime(int& H,int& M,int& S,int T);
int main(){
    //Описать процедуру IncTime(H, M, S, T), которая увеличивает на T секунд время, заданное в часах H, минутах M и секундах S
    //(H, M и S —входные и выходные параметры, T —входной параметр; все параметры —целые положительные).
    //Дано время (в часах H, минутах M, секундах S)и целое число T.
    //Используя процедуру IncTime, увеличить данное времяна T секунд и вывести новые значения H, M, S.
    int h,m,s,t;
    std::cin>>h>>m>>s>>t;
    IncTime(h,m,s,t);
    std::cout<<h<<" "<<m<<" "<<s;
}
void IncTime(int& H,int& M,int& S,int T){
    int hour = 0;
    int min = 0;
    S = T+S;
    if (S > 59){
        while(S >=60){
            S-=60;
            min++;
        }
        M += min;
        if(M > 59){
            while(M >=60){
                M-=60;
                hour++;
            }
            H+=hour;
        }
    }

}
