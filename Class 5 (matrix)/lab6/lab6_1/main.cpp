#include <iostream>
//Да се напише програма во која се вчитува матрица (со димензии M и N, 1 < M,N <= 100) од цели броеви.
//
//Сите елементи од матрицата се поставени на вредност 0 или 1.
//
//Да се формира нова матрица така што на местото на сите елементи што имаат вредност 0,
// треба да се смести бројот на елементи со вредност 1 околу тој елемент во сите осум насоки.
//
//Новодобиената матрица да се отпечати на стандарден излез, при што наместо елементите со вредност 1 од оригиналната матрица ќе се
// отпечати знак *.
//
//Пример влез:
//
//4 5
//1 0 0 1 0
//0 0 1 1 1
//0 1 0 0 1
//1 1 0 1 0
//
//излез:
//
//* 2 3 * 3
//2 3 * * *
//3 * 5 5 *
//* * 3 * 2
using namespace std;

int main() {
    int n, m; // n - redici, m - koloni
    cin >> n >> m;

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int counter;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            counter = 0;
            if (matrix[i][j] == 0) {

                // dolen sosed
                if (matrix[i + 1][j] == 1) {
                    counter++;
                }

                // desen sosed
                if (matrix[i][j + 1] == 1) {
                    counter++;
                }

                // dolen desen sosed
                if (matrix[i + 1][j + 1] == 1) {
                    counter++;
                }

                // dolen lev sosed
                if(matrix[i + 1][j - 1] == 1) {
                    counter++;
                }

                // goren sosed
                if (matrix[i - 1][j] == 1) {
                    counter++;
                }

                // lev sosed
                if (matrix[i][j - 1] == 1) {
                    counter++;
                }

                // goren lev sosed
                if (matrix[i - 1][j - 1] == 1) {
                    counter++;
                }

                // goren desen sosed
                if(matrix[i - 1][j + 1] == 1) {
                    int num = matrix[i - 1][j + 1];
                    counter++;
                }

                cout << counter << " ";

            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}
