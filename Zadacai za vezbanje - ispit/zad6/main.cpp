#include <iostream>
//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и елементите
//на матрицата кои се само вредностите 1 и 0. Програмата треба да изброи
//и отпечати на СИ во колку од редиците и колоните има барем 3 последователни
//елементи со вредност 1.
using namespace std;

// 3 8
//  0 0 1 1 1 0 0 0
//  1 1 1 0 1 1 1 0
//  0 1 1 1 1 0 0 1
//Output
// 5
int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int counter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 1 && matrix[i][j + 1] == 1 && matrix[i][j + 2] == 1) {
                ++counter;
                break;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 1 && matrix[i + 1][j] == 1 && matrix[i + 2][j] == 1) {
                ++counter;
                break;
            }
        }
    }

    cout << counter;
    return 0;
}
