#include <iostream>
#include <cstring>
//Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално, одлево-надесно и оддесно-налево.
//Притоа секој елемент од матрицата претставува буква од англиската азбука.
//
//пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)
//Од стандарден влез се чита квадратна матрица од ред n (3 <= n <= 50), составена од знаци. Прво се чита бројот
//n - бројот на редици (колони) на матрицата, а потоа и самите елементи на матрицата (види пример).
//По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.
//
//Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно
//или оддесно-налево). Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот.
//Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување, гледано елемент по
//елемент како што се чита матрицата.
//
//Доколку не се пронајде зборот, тогаш се печати Not Found.

//Input
//4
//T H K I E E N K M A E J M I E P
//KNEE
//Output
//0, 2 -> 3, 2

//Input
//6
//T H A I R E E E N K N E M A M J O L M I S P S T L R G M L O R U T Y O E
//ТОЕ
//Output
//Not Found

using namespace std;

int main() {
    int n;
    char matrix[100][100];
    char word[11];

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cin >> word;

    int r1, r2, c1, c2, k;
    int flag;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == word[0]) {
                flag = 1;
                for (k = 1; k < strlen(word); k++) {
                    // horizontalno desno
                    if (matrix[i][j + k] != word[k]) {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i;
                    c2 = j + strlen(word) - 1;
                    //0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }

                flag = 1;
                for (k = 1; k < strlen(word); k++) {
                    // vertikalno nadole
                    if (matrix[i + k][j] != word[k]) {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i + strlen(word) - 1;
                    c2 = j;
                    //0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }

                flag = 1;
                for (k = 1; k < strlen(word); k++) {
                    // horizontalno levo
                    if (matrix[i][j - k] != word[k]) {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i;
                    c2 = j - strlen(word) - 1;
                    //0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }

                flag = 1;
                for (k = 1; k < strlen(word); k++) {
                    if (matrix[i - k][j] != word[k]) {
                        flag = 0;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i - strlen(word) - 1;
                    c2 = j;
                    //0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }
            }
        }
    }

    cout << "Not Found" << endl;
    return 0;
}