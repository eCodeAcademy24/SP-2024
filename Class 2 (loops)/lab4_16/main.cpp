#include <iostream>
using namespace std;
//Да се напише програма во која во даден опсег на природни броеви [m,n],
// ќе се најдат и отпечатат во нов ред сите броеви за кои важи дека збирот на бројот со неговата слика
// (број кој ги има истите цифри,
// но во обратен редослед) е помал или еднаков на двојната вредност на бројот.
// На крај да се отпечати и бројот на вакви броеви.

//Input
//1 19
//Output
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//Vkupno: 11

int main() {
    int m, n;
    int counter = 0;
    int obraten;

    cin >> m >> n;

    for(int i = m; i <= n; i++) {
        obraten = 0;
        int tmp = i;
        while (tmp) {
            obraten = obraten * 10 + tmp % 10;
            tmp /= 10;
        }

        if((obraten + i) <= 2 * i) {
            cout << i << endl;
            counter++;
        }
    }

    cout << "Vkupno: " << counter;

    return 0;
}
