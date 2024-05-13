#include <iostream>

using namespace std;
//Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка.
// Потоа, во нов ред се внесуваат пет други износи оддвоени со празно место. Тие претставуваат некаква трансакција - одреден трошок
// или добивка на пари. Програмата печати 1 доколку после извршените трансакции корисникот сеуште има пари на својата сметка, а 0 во спротивно.
//
//input: 25600
//       10000 250 899 10 -45000
//output: 0

//input: 5000
//1000 2000 1000 1000 1000
//output:
// 1
int main() {
//    int iznos1, iznos2, iznos3, iznos4, iznos5;
//    int smetka;
//    cin >> smetka;
//    cin >> iznos1 >> iznos2 >> iznos3 >> iznos4 >> iznos5;
//
//    smetka = smetka + iznos1 + iznos2 + iznos3 + iznos4 + iznos5;
//
//    if(smetka > 0) {
//        cout << "1";
//    } else {
//        cout << "0";
//    }

    int smetka, iznos;

    cin >> smetka;
    for (int i = 0; i < 5; i++) {
        cin >> iznos;
        smetka += iznos;
    }

    if (smetka > 0) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}
