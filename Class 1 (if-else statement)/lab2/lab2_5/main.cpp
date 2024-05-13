#include <iostream>
#include <iomanip>
using namespace std;
//Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:
//
//    индекс (шестцифрен цел број)
//    шест оценки од последниот семестар кој го слушал
//
//Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)
//
//    просек на студентот
//        просекот да се испечати со точност од 3 децимали
//    година на студии
//        студентите чијшто индекс почнува на 17 се трета година, на 16 се четврта година, на 15 се петта година итн.
//    дали е награден (1 = награден, 0 = не е награден)
//        Еден студент се наградува доколку има просек еднаков или поголем од 9.5

//Input
//151021 9 9 10 10 10 8
//Output
//Prosek: 9.333
//Student: 151021
//5 godina
//Nagraden: 0

int main() {
    int indeks;
    int o1, o2, o3, o4, o5, o6;
    double prosek;

    cin >> indeks >> o1 >> o2 >> o3 >> o4 >> o5 >> o6;
    prosek = (o1 + o2 + o3 + o4 + o5 + o6) / 6.0;

    // \n - isto kako i endl, oznacuva nov red
    // fixed i setprecision() se za pecatanje na soodvetni decimalni mesta od brojot
    cout << "Prosek: " << fixed << setprecision(3) << prosek << endl;
    cout << 20 - indeks / 10000 << " godina" << endl;

    if(prosek >= 9.5) {
        cout << "Nagraden: 1";
    } else {
        cout << "Nagraden: 0";
    }

//    cout << (prosek >= 9.5) ? "Nagraden: 1" : "Nagraden: 0";
    return 0;
}
