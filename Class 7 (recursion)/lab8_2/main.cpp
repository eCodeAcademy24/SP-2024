#include <iostream>

using namespace std;

//Од стандарден влез се чита цел број К, по што се читаат N цели броеви. Да се напише програма која за секој прочитан
// број на стандарден излез ќе ги отпечати неговите цифри кои се поголеми од К, како и збирот на цифрите кои се отпечатени.
// Печатењето на цифрите поголеми од K да се реализира со посебна рекурзивна функција.
//
//Пример: Доколку К = 5, за бројот 8423871 треба да се отпечати 887 : 23

//Input
//4
//4
//25481234
//9142347
//1547810115
//569124
//Output
//58 : 13
//97 : 16
//5785 : 25
//569 : 20

long int funkcija(long int broj, int k) {
    if (broj == 0) {
        return 0;
    } else {
        if (broj % 10 > k) {
            cout << broj % 10;
            return broj % 10 + funkcija(broj / 10, k);
        } else {
            return funkcija(broj / 10, k);
        }
    }
}

long int svrtiBroj(long int broj) {
    long int obraten = 0;

    while (broj != 0) {
        obraten = obraten * 10 + broj % 10;
        broj /= 10;
    }

    return obraten;
}

int main() {

    int k, n;
    cin >> k >> n;
    //TODO: prvo kreirajte nov broj so cifri pogolemi od K, a potoa soberete suma na toj nov broj se da bide preku rekurzija. ZA DOMA!!!
    for (int i = 0; i < n; i++) {
        long int broj;
        cin >> broj;

        long int obraten = svrtiBroj(broj);
        long int suma = funkcija(obraten, k);
        cout <<" : " << suma << endl;
    }

    return 0;
}
