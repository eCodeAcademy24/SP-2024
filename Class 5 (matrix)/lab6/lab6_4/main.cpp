#include <iostream>
//За дадена квадратна матрица со големина N, најдете ја разликата помеѓу главната и споредната дијагонала,
// а потоа разликата помеѓу првата колона и последната колона на матрицата.
//
//Пример:
//
//Влез: 3
//
//1 2 3
//
//1 1 1
//
//2 2 2
//
//Излез:
//
//-2
//
//-2

//Input
//5
//1 2 3 4 5
//9 8 7 6 5
//3 2 4 1 5
//6 6 6 6 0
//4 4 4 4 4
//Output
//-2
//4
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sumaGlavna = 0, sumaSporedna = 0, sumaPrvKolona = 0, sumaPoslednaKolona = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sumaGlavna += matrix[i][j];
            }
            if (i + j == n - 1) {
                sumaSporedna += matrix[i][j];
            }
            if (j == 0) {
                sumaPrvKolona += matrix[i][j];
            }
            if (j == n - 1) {
                sumaPoslednaKolona += matrix[i][j];
            }
        }
    }

    cout << sumaGlavna - sumaSporedna << endl;
    cout << sumaPrvKolona - sumaPoslednaKolona << endl;
    return 0;
}
