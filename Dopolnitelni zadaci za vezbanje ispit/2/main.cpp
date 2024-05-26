#include <iostream>
#include <cmath>

//Од тастатура се чита природен број N (N < 400).
//
//Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед на
//следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре, па продолжува
//во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги собере сите броеви до N.
//Доколку има преостанати празни места, тие да се пополнат со нули.
using namespace std;

//Input
//22
//Result
//1 10 11 20 21
//2 9 12 19 22
//3 8 13 18 0
//4 7 14 17 0
//5 6 15 16 0

int main() {
    int n;

    cin >> n;

    int m = (int) (ceil(sqrt(n)));
    int counter = 1;
    int matrix[100][100];

    for (int k = 0; k < m; k++) {
        if (k % 2 == 0) {
            for (int i = 0; i < m; i++) {
                for (int j = k; j < m; j += m) {
                    if (counter <= n) {
                        matrix[i][j] = counter;
                        counter++;
                    } else {
                        matrix[i][j] = 0;
                    }
                }
            }
        } else {
            for (int i = m - 1; i >= 0; i--) {
                for (int j = k; j < m; j += m) {
                    if (counter <= n) {
                        matrix[i][j] = counter;
                        counter++;
                    } else {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    }


    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
