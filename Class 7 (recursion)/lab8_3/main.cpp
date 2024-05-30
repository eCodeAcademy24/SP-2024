#include <iostream>

//Да се напише рекурзивна функција f() која за даден природен број ќе го пресмета и враќа збирот на сите цифри кои
// се наоѓаат на парни позиции (гледано од десно кон лево). Се смета дека најмалку значајната цифра е на 1-ва позиција.
// Потоа да се напише програма која за даден природен број n (што се внесува од тастатура) ќе ја повика функцијата f()
// за да го испечати збирот на цифрите кои се наоѓаат на парни позиции во n.
//
//Пример:
//
//Влез:
//
//717623
//
//Излез:
//
//16
//
//Објаснување:
//
//Збирот на цифрите што се наоѓаат на парни позиции во бројот 717623 е 7 + 7 + 2 = 16.

//Input
//717623
//Output
//16
using namespace std;

int recursive(int broj) {
    if (broj == 0) {
        return 0;
    } else {
        return broj % 10 + recursive(broj / 100);
    }
}

// Ovoj kod e standard za suma na cifri na daden broj
//int sum(int broj) {
//    if (broj == 0) {
//        return 0;
//    } else {
//        return broj % 10 + recursive(broj / 10);
//    }
//}

int main() {
    int broj;
    cin >> broj;

    cout << recursive(broj / 10);
    return 0;
}