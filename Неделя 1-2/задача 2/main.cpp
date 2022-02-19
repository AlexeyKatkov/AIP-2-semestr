#include <iostream>

using namespace std;

int main()
{
    // 2h.Пользователь вводит параметры трапеции. Найти периметр и площадь трапеции:
    float osnovanie1, osnovanie2, bok1, bok2, h;
    cout << "Dlina osnovani: ";
    cin >> osnovanie1 >> osnovanie2;
    cout << "Dlina visoti: ";
    cin >> h;
    cout << "Dlina bokovih storon: ";
    cin >> bok1 >> bok2;
    float s = (osnovanie1 + osnovanie2)*h/2;
    float p = osnovanie1 + osnovanie2 + bok1 + bok2;
    if (s == 0 || bok1 == 0 || bok2 == 0 || h == 0 ){
        cout << "oshibka";
    } else {
         cout << "Plosohad: " << s << endl
             << "Perimetr: " << p <<endl;
    }


}
