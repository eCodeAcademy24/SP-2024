#include <iostream>
#include <iomanip>
//Еден елемент се заматува ако се најде аритметичка средина на елементот и сите негови соседи. Сосед на еден елемент се
//сите елементи кои припаѓаат на матрицата и се околу истиот елемент (хоризонтално, вертикално и дијагонално).
//
//Од стандарден влез се чита матрица од реални броеви (3 < n,m < 50). Прво се читаат бројот на редици и колони на матрицата
//и во секој преостанат ред се внесува еден ред од матрицата (види пример).По читањето на матрицата, се внесуваат и 2 пара
//координати на матрицата (ред и колона) кои го репрезентираат горниот-лев и долниот-десен елемент од регионот. Потребно е
//да генеирате нова матрица во која ќе ги заматите сите елементи кои припаѓаат на регионот.
#define MAX 50


//Input
//3 4
//1.00 2.00 3.00 4.00
//5.00 6.00 7.00 8.00
//9.00 0.00 1.00 2.00
//0 1
//2 2
//Output
//1.00 4.00 5.00 4.00
//5.00 3.78 3.67 8.00
//9.00 4.67 4.00 2.00
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    float matrix[100][100], helpMatrix[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int indexI1, indexI2, indexJ1, indexJ2;

    cin >> indexI1 >> indexJ1;
    cin >> indexI2 >> indexJ2;

    for (int i = indexI1; i <= indexI2; i++) {
        for (int j = indexJ1; j <= indexJ2; j++) {
            float sum = matrix[i][j];
            int counter = 1;

            if (i > 0) { // goren
                sum += matrix[i - 1][j];
                counter++;
            }

            if (i < n - 1) { // dolen
                sum += matrix[i + 1][j];
                counter++;
            }

            if (j > 0) { // levo
                sum += matrix[i][j - 1];
                counter++;
            }

            if (j < m - 1) { // desno
                sum += matrix[i][j + 1];
                counter++;
            }

            if (i > 0 && j > 0) { // gore levo
                sum += matrix[i - 1][j - 1];
                counter++;
            }

            if (i < n - 1 && j < m - 1) { // dole desno
                sum += matrix[i + 1][j + 1];
                ++counter;
            }

            if (i > 0 && j < m - 1) { // gore desno
                sum += matrix[i - 1][j + 1];
                ++counter;
            }

            if (i < n - 1 && j > 0) { // dole levo
                sum += matrix[i + 1][j - 1];
                ++counter;
            }

            helpMatrix[i][j] = sum / (float) counter;
        }
    }

    for (int i = indexI1; i <= indexI2; i++) {
        for (int j = indexJ1; j <= indexJ2; j++) {
            matrix[i][j] = helpMatrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << fixed << setprecision(2) << matrix[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}