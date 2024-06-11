#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
//Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви,
//цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
//
//Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2
//пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот.
//При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

//Влез:
//
//6
//
//Ekjqh!!lkjsdh
//
// A1c01АA1c92
//
//12A1cwwA1cxy
//
//12A1cwwA1bxy
//
//аA1cwA1cA1ccA1cxab
//
//nemaA1c_povekjepati
//
//
//Излез
//
//а1c01аа1c92
//
//12а1cwwа1cxy
//
//аа1cwа1cа1ccа1cxab

int main() {
    int n;
    cin >> n;

    char line[100];

    for (int i = 0; i < n; i++) {
        cin >> line;
        int counter = 0;

        for (int j = 0; j < strlen(line); j++) {
            line[j] = tolower(line[j]);
            if (line[j] == 'a' && line[j + 1] == '1' && line[j + 2] == 'c') {
                ++counter;
            }
        }

        if (counter >= 2) {
            cout << line << endl;
        }
    }
    return 0;
}