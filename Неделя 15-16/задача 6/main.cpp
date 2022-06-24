#include <iostream>
#include <cmath>



//11.Реализовать   сложение,   вычитание,   умножение,   транспонирование   матриц (разрешается фиксированный размер матриц).

void sum(int ar[3][2]) {
    int ar1[3][2];
    std::cout << "Заполните вторую матрицу 3 на 2\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> ar1[i][j];

        }
    }


    std::cout << "Их сумма:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {

            std::cout << ar[i][j] + ar1[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

}
void sub(int ar[3][2]) {
    int ar1[3][2];
    std::cout << "Заполните вторую матрицу 3 на 2\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> ar1[i][j];

        }
    }

    std::cout << "Их разность:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {

            std::cout << ar[i][j] - ar1[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

}
void mult(int ar[3][2]) {
    std::cout << "Вторая матрица:\n";
    int ar1[2][3];
    std::cout << "Заполните вторую матрицу 2 на 3\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> ar1[i][j];

        }
    }



    std::cout << "Их произведение:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            std::cout << ar[i][0] * ar1[0][j] + ar[i][1] * ar1[1][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

}
void transpon(int ar[3][2]) {
    std::cout << "Транспонированная матрица:\n";
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 3; i++) {

            std::cout << ar[i][j] << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main() {

    int ar[3][2];
    std::cout << "Заполните матрицу 3 на 2\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin>>ar[i][j];

        }
    }

    std::cout << "Что сделать с матрицей?"
        << "\n1.Сложение"
        << "\n2.Вычитание"
        << "\n3.Умножение"
        << "\n4.Транспонирование\n";
    int answer = 0;
    while (answer > 4 || answer <= 0) {
        std::cin >> answer;
        if (answer > 4 || answer <= 0) std::cout << "Такого варианта нет, повторите попытку\n";

    }
    switch (answer)
    {
    case 1:
        sum(ar);
        break;
    case 2:
        sub(ar);
        break;
    case 3:
        mult(ar);
        break;
    case 4:
        transpon(ar);
        break;
    }





}
