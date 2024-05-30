#include <iostream>

using namespace std;

//Да се напише рекурзивна функција која што прима еден аргумент број x која што ќе враќа 1 доколку секоја цифра во бројот е помала од предходната,
// а во спротивно 0.
//
//Пример бројот 54321 е опаѓачки, додека пак бројот 54123 не е опаѓачки број.
//
//Од стандарден влез се вчитува прво број N, а потоа N броеви. За секој број да се испечати 1 или 0 (во нов ред),
// доколку бројот е опаѓачки или не е опаѓачки.

//Input
//5
//54321
//6521
//12
//5
//777
//Output
//1
//1
//0
//1
//0

int recursive(int broj) {
    if (broj < 10) {
        return 1;
    } else {
        if (broj % 10 < broj % 100 / 10) {
            return recursive(broj / 10);
        } else {
            return 0;
        }
    }
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int broj;
        cin >> broj;

        cout << recursive(broj) << endl;
    }

    //    int array[n];
//    for (int i = 0; i < n; i++) {
//        cin >> array[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        cout << recursive(array[i]) << endl;
//    }


    return 0;
}
