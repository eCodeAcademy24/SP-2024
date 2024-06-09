#include <iomanip>
#include <iostream>
#include <string.h>
// Во посебен ред е запишана сумата на уплата(цел број).
//
// Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
// ab12 1 1.25
// Првиот број е шифрата на типот(низа од знаци која не е подолга од 9 знаци),
// вториот број е типот(може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//
// Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето.
// Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//
// Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

using namespace std;
//Input
// 100
// ab12 1 1.2
// c234 2 2.0
// #
//Output
//c234 2 2.00
//240.00
int main() {
    int uplata;
    cin >> uplata;

    char shifra[10], maxShifra[10];
    int tip = 0, maxTip = 0;
    double koeficient = 0.0, maxKoeficient = 0.0, total = 1.0;

    bool isFirstTime = true;

    while (cin >> shifra) {
        if (strcmp(shifra, "#") == 0) break;
        cin >> tip;
        cin >> koeficient;

        total *= koeficient; // proizvod na site koeficienti
        if (isFirstTime) {
            isFirstTime = false;
            strcpy(maxShifra, shifra);
            maxTip = tip;
            maxKoeficient = koeficient;
            continue;
        }

        if (koeficient > maxKoeficient) {
            strcpy(maxShifra, shifra);
            maxTip = tip;
            maxKoeficient = koeficient;
        }
    }

    //c234 2 2.00
    cout << maxShifra << " " << maxTip << " " << fixed << setprecision(2) << maxKoeficient << endl;

    double suma = total * uplata;
    //240.00
    cout << fixed << setprecision(2) << suma;
    return 0;
}
