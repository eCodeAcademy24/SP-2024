#include <iostream>
//Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата).
//Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).

// Од стандарден влез се внесува матрица со димензии NxM(1 <= N, M < 100).
//  Потоа се внесуваат два броеви кои претставуваат индекси на еден елемент од матрицата.
//
// Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез.
// Притоа се печати сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот.
// Доколку не може да се креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.

//Input
// 2 3
// 5 7 8
// 1 2 3
// 1 1
//Output
//15 5 1 5
using namespace std;

int main() {
    int redici, koloni;
    cin >> redici >> koloni;

    int matrix[100][100];
    for (int i = 0; i < redici; i++) {
        for (int j = 0; j < koloni; j++) {
            cin >> matrix[i][j];
        }
    }

    int indexI, indexJ;
    cin >> indexI >> indexJ;

    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (int i = 0; i < redici; i++) {
        for (int j = 0; j < koloni; j++) {
            if (i < indexI && j >= indexJ) {
                // prv kvadrant
                sum1 += matrix[i][j];
            } else if (i < indexI && j < indexJ) {
                //vtor kvadrant
                sum2 += matrix[i][j];
            } else if (i >= indexI && j < indexJ) {
                //tret kvadrant
                sum3 += matrix[i][j];
            } else {
                /* if (i >= indexI && j >= indexJ) mozhe da si stavite i else if ama nema potreba */
                // cetvrt kvadrant
                sum4 += matrix[i][j];
            }
        }
    }

    cout << sum1 << " " << sum2 << " " << sum3 << " " << sum4;
    return 0;
}
