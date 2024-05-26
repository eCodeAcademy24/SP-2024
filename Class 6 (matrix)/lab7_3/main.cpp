#include <iostream>
//Да се напише програма во која од тастатура се читаат број на редици и колони (не поголеми од 100) и елементи на матрица
// (цели броеви).
//
//Да се испечати редниот број на колоната (индексот) којашто има најмала сума на елементите. Ако има повеќе колони со иста
// најмала сума,
// да се испечати индексот на првата таква колона.
//
//Читањето на елементи во матрицата да се направи преку функција void readMatrix(int a[100][100], int n, int m)

//Input
//2 2
//25 52
//52 24
//Output
// 1
using namespace std;

void readMatrix(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[100][100];

    readMatrix(matrix, n, m);

    int suma, minSuma = 0, indexJ = 0;
    int flag = 1;

    for (int j = 0; j < m; j++) {
        suma = 0;
        for (int i = 0; i < n; i++) {
            suma += matrix[i][j];
        }

        if(flag == 1) {
            minSuma = suma;
            flag = 0;
        }

        if(suma < minSuma) {
            minSuma = suma;
            indexJ = j;
        }
    }

    cout << indexJ;

    return 0;
}
