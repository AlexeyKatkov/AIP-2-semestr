#include <iostream>
#include <cmath>



//11.Реализовать   сложение,   вычитание,   умножение,   транспонирование   матриц (разрешается фиксированный размер матриц).
void sum(int ar1[3][2], int ar2[3][2], int ar3[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            ar3[i][j] = ar1[i][j] + ar2[i][j];
        }
    }
}
void sub(int ar1[3][2], int ar2[3][2], int ar3[3][2]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            ar3[i][j] = ar1[i][j] - ar2[i][j];
        }
    }
}
void mult(int ar1[3][2], int ar2[2][3], int ar3[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ar3[i][j] = ar1[i][0] * ar2[0][j] + ar1[i][1] * ar2[1][j];
        }
    }

}
void transpon(int ar1[3][2], int ar2[2][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++){

            ar2[j][i]= ar1[i][j];
        }
    }
}

int main() {
    setlocale(LC_CTYPE, "");
    int ar1[3][2], ar2[3][2], ar3[3][2], ar2m_t[2][3], ar3m[3][3];
    std::cout << "Заполните матрицу 3 на 2\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cin >> ar1[i][j];
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

        std::cout << "Заполните вторую матрицу 3 на 2\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                std::cin >> ar2[i][j];

            }
        }
        sum(ar1, ar2, ar3);
        std::cout << "Сумма матриц\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout<<ar3[i][j]<<"\t";                
            }
            std::cout<<std::endl;
        }
        std::cout << std::endl;

        break;
    case 2:
        std::cout << "Заполните вторую матрицу 3 на 2\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                std::cin >> ar2[i][j];

            }
        }
        sub(ar1, ar2, ar3);
        std::cout << "Разность матриц\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << ar3[i][j] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;
    case 3:
        std::cout << "Заполните вторую матрицу 2 на 3\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                std::cin >> ar2m_t[i][j];

            }
        }
        mult(ar1, ar2m_t, ar3m);
        std::cout << "Произведение матриц\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << ar3m[i][j] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;
    case 4:
        transpon(ar1,ar2m_t);
        std::cout << "Транспонированная матрица\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << ar2m_t[i][j] << "\t";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        break;
    }
}
