#include <iostream>
#include <iomanip>

//Да се напише код којшто од стандарден влез ќе чита информации за една фискална сметка на следниов начин:
//
//    напрво се чита број N
//    потоа ќе читаат уште N парови на вредности од следниот формат: износ тип_на_данок
//        пр. 5 100 А 50 B 66 A 77 B 88 V
//
//каде што првата вредност во парот изнесува износот на некој купен артикал, додека пак втората вредност е карактер
// (A, B, V) што означува каков тип на данок на додадена вредност се пресметува за тој артикал:
//
//    А означува 18%
//    B означува 5%
//    V означува 0%
//
//Да се испечати на стандарден излез колку ќе изнесува повратокот на ДДВ за фискалната сметка што е вчитана од стандарден влез.
// Повратокот на ДДВ се пресметува како 15% од вкупно наплатеното ДДВ.

//Input
//5 100 A 50 B 66 A 77 B 88 V
//Output
//Total tax return is: 5.43

using namespace std;

int main() {
    int n, iznos;
    char tipNaDanok;
    float suma = 0;
    float danok = 1, ddv = 1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> iznos >> tipNaDanok;
        if (tipNaDanok == 'A') {
            danok = iznos * 0.18;
            ddv = danok * 0.15;
            suma += ddv;
        } else if (tipNaDanok == 'B') {
            danok = iznos * 0.05;
            ddv = danok * 0.15;
            suma += ddv;
        } else {
            danok = iznos * 0.00;
            ddv = danok * 0.15;
            suma += ddv;
        }
    }

    cout << "Total tax return is: " << fixed << setprecision(2) << suma;
    return 0;
}
