#include <iostream>
#include <cmath>

struct People {
    std::string pol;
    std::string name2;
    int age;
};


//18.В населенном пункте проживает N человек. О каждом известны фамилия, возраст, пол.
//  A.Ввести  информацию  о  жителях  данного  пункта  и  посчитать  количество женщин и мужчин,
//вывести информацию о тех, кого больше возраст.
//  B.Ввести  информацию  о  жителях  данного  пункта  и  посчитать  количество женщин  и  мужчин,
//вывести  информацию  о  среднем  возрасте  мужчин, напечатать фамилии тех, чей возраст ниже среднего.
//  C.Ввести информацию о жителях данного пункта и посчитать среднийвозраст женщин  и  мужчин,
//вывести  информацию  о  тех,  у  кого  возраст  больше среднего.


int main() {
    setlocale(LC_CTYPE, "");


    People chel[5];
    for (int i = 0; i < 5; i++) {

        std::cout << "Введите пол жителя : ";

        std::cin >> chel[i].pol;

        std::cout<<"\nВведите фамилию жителя: ";
        std::cin>>chel[i].name2;
        std::cout << "\nВведите возраст жителя: ";
        std::cin >> chel[i].age;
    }
    std::string gen;
    int maxage = chel[0].age;
    for (int i = 1; i < 5; i++) {
        if (chel[i].age > maxage) {
            maxage = chel[i].age;
            gen = chel[i].pol;
        }
    }
    std::cout << "Самый возрастной житель " << gen << " " << maxage << " лет\n";
    int srage = 0;
    int chet = 0;
    for (int i = 0; i < 5; i++) {
        if (chel[i].pol == "Man" || chel[i].pol == "man") {
            srage = srage + chel[i].age;
            chet++;
        }
        else continue;
    }
    srage = srage / chet;
    std::cout << "Мужчины, чей возраст ниже среднего:\n";
    for (int i = 0; i < 5; i++) {
        if (chel[i].pol == "Man" || chel[i].pol == "man") {
            if (chel[i].age < srage) std::cout << chel[i].name2 << "\n";
            else continue;

        }

    }
    srage = 0;

    for (int i = 0; i < 5; i++) {
        srage = srage + chel[i].age;
    }
    srage = srage / 5;
    std::cout << "Жители, чей возраст выше среднего:\n";
    for (int i = 0; i < 5; i++) {
        if (chel[i].age > srage) std::cout << chel[i].pol << "\t" << chel[i].name2 << "\t" << chel[i].age << " лет\n";
        else continue;



    }
}

