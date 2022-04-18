#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//    11.Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3.
    int num;
    cout << "Введите 1 число: ";
    cin >> num;

    int min=num;
    int max=num;
    for(int i=2;i<=3;i++){
        cout << "Введите "<< i <<" число: ";
        cin >> num;
        if (min > num)
            min = num;
        if (max < num)
            max = num;
    }
    cout << max+5 << " " << min-3;

}
