#include <iostream>
//Да се напише програма која за петцифрен број прочитан од стандарден влез ќе проверува дали е палиндром.
// Ако бројот е палиндром, на екран треба да се испечати пораката "Palindrom", а во спротивно - "Ne e palindrom".
// Доколку внесениот број не е петцифрен треба да се испечати пораката "Nevaliden vlez".

//Input
//44444
//Palindrom

using namespace std;

int main() {

    int broj;
    cin >> broj;

    if (!(broj >= 10000 && broj <= 99999)) {
        cout << "Nevaliden vlez";
        return 0;
    }

    int tmp = 0;

    //se prevrtuva broj
    int pamtiBroj = broj; // NE ZABORAVAJ DA GO CHUVASH BROJOT!!!
    while (pamtiBroj) {
        int poslednaCifra = pamtiBroj % 10;
        tmp = (tmp * 10) + poslednaCifra;
        pamtiBroj /= 10;
    }

    if (tmp == broj) {
        cout << "Palindrom";
    } else {
        cout << "Ne e palindrom";
    }


    return 0;
}
