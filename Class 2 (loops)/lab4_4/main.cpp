#include <iostream>

using namespace std;

//Да се напише програма во која во даден опсег на природни броеви [a,b],
// ќе се најдат и отпечатат сите броеви чијшто збир на цифри кои се деливи со 2, но НЕ се деливи со 3, е
// поголем од 0 и е делив со 7.
// На крај да се отпечати и бројот на вакви броеви.

//Input
//1200 2000
//Output
//1248
//1284
//1428
//1482
//1824
//1842
//Vkupno: 6

int main() {
    int a, b, suma, counter = 0;
    cin >> a >> b;

    for(int i=a; i<b; i++){
        suma = 0;
        int tmp = i;
        while(tmp){
            int poslednaCifra = tmp % 10;
            if(poslednaCifra % 2 == 0 && poslednaCifra % 3 != 0) {
                suma += poslednaCifra;
            }
            tmp/=10;
        }
        if(suma > 0 && suma % 7 == 0){
            cout << i << endl;
            counter ++;
        }
    }
    cout << "Vkupno: " << counter << endl;
    return 0;
}