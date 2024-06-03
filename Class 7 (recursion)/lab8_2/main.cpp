#include <iostream>

using namespace std;

//Од стандарден влез се чита цел број К, по што се читаат N цели броеви. Да се напише програма која за секој прочитан
// број на стандарден излез ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени.
// Печатењето на цифрите поголеми од K да се реализира со посебна рекурзивна функција.
//
//Пример: Доколку К = 5, за бројот 8423871 треба да се отпечати 887 : 23

//Input
// 4
// 4
// 25481234
// 9142347
// 1547810115
// 569124
//Output
//58 : 13
//97 : 16
//5785 : 25
//569 : 20

long long int funkcija(long long int broj, int k) {
    if (broj == 0) {
        return 0;
    }
    if (broj % 10 > k) {
        cout << broj % 10;
        return broj % 10 + funkcija(broj / 10, k);
    }
    return funkcija(broj / 10, k);
}

long long int svrtiBroj(long long int broj) {
    long long int obraten = 0;

    while (broj != 0) {
        obraten = obraten * 10 + broj % 10;
        broj /= 10;
    }

    return obraten;
}

// 4 --> k
//7432419
long long int kreiraj_broj(long long int broj, int k, long long int popolni) {
    if (broj == 0) {
        return popolni;
    }

    if (broj % 10 > k) {
        return kreiraj_broj(broj / 10, k, popolni * 10 + broj % 10);
    }

    return kreiraj_broj(broj / 10, k, popolni);
}

long long int recursive_sum(long long int broj) {
    if (broj == 0) {
        return 0;
    }

    return broj % 10 + recursive_sum(broj / 10);
}


int main() {
    int k, n;
    cin >> k >> n;

    for (int i = 0; i < n; i++) {
        long long int broj;
        cin >> broj;

        long long int obraten = svrtiBroj(broj);
        long long int popolni = 0;
        long long int novBroj = kreiraj_broj(obraten, k, popolni);
        long long int sum = recursive_sum(novBroj);
        cout << novBroj << " : " << sum << endl;
        // long long int suma = funkcija(obraten, k);
        // cout << " : " << suma << endl;
    }

    return 0;
}
