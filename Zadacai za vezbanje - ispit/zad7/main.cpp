#include <cmath>
#include <iostream>
//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100),
//а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент
//од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен
//од аритметичката средина во рамки на таа редица. Ако постојат повеќе елементи што
//се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
//Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
//
// Пример:
//
// Влез:
//
// 3 6
//
// 1 2 2 3 4 5
//
// 1 1 2 2 3 3
//
// 1 2 3 4 5 6
//
// Излез:
//
// 5 1 1
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[100][100];
    int array[m];

    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }

        double average = (double) sum / n;
        int furthest = matrix[i][0];

        for (int j = 1; j < n; j++) {
            if (fabs(matrix[i][j] - average) > fabs(furthest - average)) {
                furthest = matrix[i][j];
            }
        }

        array[i] = furthest;
    }

    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
