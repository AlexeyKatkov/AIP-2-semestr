#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//    11.Вводятся три целых числа. Наибольшее увеличить на 5, наименьшее уменьшить 3.
    int num1,num2,num3,l;
    cout << "Vvedite 3 chisla: ";
    cin >> num1 >> num2 >> num3;
    int n[]={num1,num2,num3};
    int min=n[0];
    int max=n[0];
    for(int i=1;i<3;i++){
        if (min > n[i])
            min = n[i];
        if (max < n[i])
            max = n[i];
    }
    cout << max+5 << " " << min-3;
}
