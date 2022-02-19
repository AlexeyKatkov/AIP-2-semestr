#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//    9 H.Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
//    Мощность (гигакалорий в минуту, калорий в час, джоуль в час, эрг в секунду)
    float gcal,cal,joule,erg;
    int num;
    cout << "Vvedite chislo edinici izmereniya:\n1.GCal/min\n2.Cal/hour\n3.Joule/hour\n4.Erg/sec"<<endl;
    cin >> num;
    if (num == 1){
        int num1;
        cout << "Vvedite chislo togo vo chto bydete perevodit:\n1.Cal/hour\n2.Joule/hour\n3.Erg/sec"<<endl;
        cin >> num1;
        if (num1 == 1){
            cout<< "GCal/min = ";
            cin >> gcal;
            cout << gcal <<" GCal/min = " << gcal*60 << " * 10^9 Cal/hour ";
        }


        if (num1 == 2){
            cout<< "GCal/min = ";
            cin >> gcal;

            cout << gcal << " GCal/min = " << gcal*4.19 << " * 10^9 Joule/hour " ;
        }


        if (num1 == 3){
            cout<< "GCal/min = ";
            cin >> gcal;
            cout << gcal <<  "GCal/min = " << gcal*6978 << " * 10^11 Erg/sec " ;
        }

    }
    if (num == 2){

        int num2;
        cout << "Vvedite chislo togo vo chto bydete perevodit:\n1.GCal/min\n2.Joule/hour\n3.Erg/sec"<<endl;
        cin >> num2;
        if (num2 == 1){
            cout<< "Cal/hour = ";
            cin >> cal;
            cout << cal <<" Cal/hour = " << cal/60 << " * 10^(-9) GCal/min ";
        }


        if (num2 == 2){
            cout<< "Cal/hour = ";
            cin >> cal;
            cout << cal << " Cal/hour = " << cal*4.1868 << " Joule/hour ";
        }


        if (num2 == 3){
            cout<< "Cal/hour = ";
            cin >> cal;
            cout << cal << " Cal/hour = " << cal* 11630 << " Erg/sec ";
        }

    }
    if (num == 3){

        int num3;
        cout << "Vvedite chislo togo vo chto bydete perevodit:\n1.GCal/min\n2.Cal/hour\n3.Erg/sec"<<endl;
        cin >> num3;
        if (num3 == 1){
            cout<< "Joule/hour = ";
            cin >> joule;
            cout << joule <<" Joule/hour = " << (joule*2.39)/60 << " * 10^(-10) GCal/min ";
        }


        if (num3 == 2){
            cout<< "Joule/hour = ";
            cin >> joule;
            cout << joule << " Joule/hour = " << joule*0.29 << " Cal/hour ";
        }


        if (num3 == 3){
            cout<< "Joule/hour = ";
            cin >> joule;
            cout << joule << " Joule/hour = " << joule/3600 << " * 10^7 Erg/sec ";
        }
}
    if (num == 4){

        int num4;
        cout << "Vvedite chislo togo vo chto bydete perevodit:\n1.GCal/min\n2.Cal/hour\n3.Joule/hour"<<endl;
        cin >> num4;
        if (num4 == 1){
            cout<< "Erg/sec = ";
            cin >> erg;
            cout << erg <<" Erg/sec = " << erg*2.39*6 << " * 10^(-16) GCal/min ";
        }


        if (num4 == 2){
            cout<< "Erg/sec = ";
            cin >> erg;
            cout << erg << " Erg/sec = " << erg*2.39*36 << " * 10^(-6) Cal/hour ";
        }


        if (num4 == 3){
            cout<< "Erg/sec = ";
            cin >> erg;
            cout << erg << " Erg/sec = " << erg*36 << " * 10^(-5) Joule/hour " ;
        }
    }
    if (num > 4 || num <1 ){
        cout << "Oshibka";
    }
}
