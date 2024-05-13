#include <iostream>
//Да се напише програма во која од стандарден влез се чита мобилен број во следниот формат XXYYYZZZ (пр. 71298486).
// Програмата треба да го испечати во формат XXX/YYY-ZZZ (пр. 071/298-486). Дополнително, треба да го испечати и името на иницијалниот оператор:
//
//    070/071/072 - T-Mobile,
//    075/076/077/078 - А1.
//    079 - Lycamobile

//Input
//070120004
//Output
//070/004-004 T-mobile


//070 120 004 - sredeno
//070 120 040 - sredeno
//070 120 400 - sredeno
//070 002 400 - sredeno
//070 020 400 - sredeno
//070 200 400 - sredeno
//070 020 040 - sredeno
//070 020 004 - sredeno
//070 002 004 - sredeno
//070 002 040 - sredeno
using namespace std;

int main() {

    int broj;
    cin >> broj;

    if ((broj / 1000) % 1000 > 99 && broj % 1000 > 99) {
        cout << "0" << broj / 1000000 << "/" << (broj / 1000) % 1000 << "-" << broj % 1000;
    } else if ((broj / 1000) % 1000 > 99 && broj % 1000 > 9) {
        cout << "0" << broj / 1000000 << "/" << (broj / 1000) % 1000 << "-0" << broj % 1000;
    } else if ((broj / 1000) % 1000 > 99 && (broj % 1000 <= 9 && broj % 1000 >= 0)) {
        cout << "0" << broj / 1000000 << "/" << (broj / 1000) % 1000 << "-00" << broj % 1000;
    } else if ((broj / 1000) % 1000 > 9 && broj % 1000 > 99) {
        cout << "0" << broj / 1000000 << "/0" << (broj / 1000) % 1000 << "-" << broj % 1000;
    } else if ((broj / 1000 % 1000 <= 9 && broj / 1000 % 1000 >= 0) && broj % 1000 > 99) {
        cout << "0" << broj / 1000000 << "/00" << broj / 1000 % 1000 << "-" << broj % 1000;
    } else if ((broj / 1000 % 1000 <= 99 && broj / 1000 % 1000 > 9) && (broj % 1000 <= 99 && broj % 1000 > 9)) {
        cout << "0" << broj / 1000000 << "/0" << broj / 1000 % 1000 << "-0" << broj % 1000;
    } else if ((broj / 1000 % 1000 <= 99 && broj / 1000 % 1000 > 9) && (broj % 1000 <= 9 && broj % 1000 >= 0)) {
        cout << "0" << broj / 1000000 << "/0" << broj / 1000 % 1000 << "-00" << broj % 1000;
    } else if ((broj / 1000 % 1000 <= 9 && broj / 1000 % 1000 >= 0) && (broj % 1000 <= 9 && broj % 1000 >= 0)) {
        cout << "0" << broj / 1000000 << "/00" << broj / 1000 % 1000 << "-00" << broj % 1000;
    } else if ((broj / 1000 % 1000 <= 9 && broj / 1000 % 1000 >= 0) && (broj % 1000 <= 99 && broj % 1000 > 9)) {
        cout << "0" << broj / 1000000 << "/00" << broj / 1000 % 1000 << "-0" << broj % 1000;
    }

//    070/071/072 - T-Mobile,
//    075/076/077/078 - А1.
//    079 - Lycamobile
// Ako se vnese 080 ili neshto shto ne e od gornite tri operatori da ispechati Greshen operator.

    if (broj / 1000000 == 70 || broj / 1000000 == 71 || broj / 1000000 == 72) {
        cout << " T-mobile";
    } else if (broj / 1000000 == 75 || broj / 1000000 == 76 || broj / 1000000 == 77 || broj / 1000000 == 78) {
        cout << " A1";
    } else if (broj / 1000000 == 79) {
        cout << " LycaMobile";
    } else {
        cout << " Greshen operator";
    }
    return 0;
}
