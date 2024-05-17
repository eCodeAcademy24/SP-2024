#include <iostream>
//Од стандарден влез се внесуваат два цели броеви A и P.
//
//Да се испечатат во опаѓачки редослед првите 5 броеви во интервалот (0,A] за коишто важи дека сумата на нивните
// цифри изнесува P проценти од самиот број.
//
//Ако нема такви броеви во интервалот, да се испечати порака NEMA.

//Input
//100000 25
//Output
//48
//36
//24
//12

using namespace std;

int main() {
    int suma;
    int a, p;
    int counter = 0;

    cin >> a >> p;

    for (int i = a; i > 0; i--) {
        suma = 0;
        int tmp = i;
        while (tmp) {
            int poslednaCifra = tmp % 10;
            suma += poslednaCifra;
            tmp /= 10;
        }

        float presmetajProcent = (suma / (float) i) * 100;
        if(presmetajProcent == p) {
            cout << i << endl;
            counter++;
        }

        if(counter == 5) return 0;
    }

    if(counter == 0) {
        cout << "NEMA";
    }
    return 0;
}
