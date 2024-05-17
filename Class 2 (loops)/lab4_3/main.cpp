#include <iostream>

//Да се напише програма во која во даден опсег на природни броеви [a,b],
// ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2 е поголем од 0 и е делив со 4.
// На крај да се отпечати и бројот на вакви броеви.

//Input
//17 29
//Output
//18
//22
//26
//Vkupno: 3

using namespace std;

int main() {
    int a, b, suma, counter = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        suma = 0;
        int tmp = i;
        while (tmp) {
            int poslednaCifra = tmp % 10;
            if (poslednaCifra % 2 == 0) {
                suma += poslednaCifra;
            }
            tmp /= 10;
        }

        if (suma > 0 && suma % 4 == 0) {
            cout << i << endl;
            counter++;
        }
    }

    cout << "Vkupno: " << counter;
    return 0;
}
