#include <iostream>

using namespace std;

int main()
{
//    6.Пользователь вводит три числа.
//    Найдите среднее арифметическое этих чисел,
//    а также разность удвоенной суммы первого и третьего чисел и утроенного второго числа.
    float a,b,c;
    cout << "Vvedite 3 chisla: ";
    cin >> a >> b >> c;
    float srednee = (a + b + c)/3;
    float sum = (a+c)*2 - 3*b;
    cout << srednee << endl
         << sum;



}
