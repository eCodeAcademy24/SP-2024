#include <iostream>
using namespace std;
//За дадена низа од N големина, исчитајте ја истата и потоа:
//
//    Испечатете ја во нејзината оригинална форма
//    Сменете го распоредот на низата во обратна насока
//    Отстранете го секој втор член
//    Повторно сменете го распоредот на низата во обратна насока
//
//За секоја од овие промени испечатете ја низата. За целосни поени работете само со една низа.
//
//Пример:
//
//Влез:
//
//5
//1 2 3 4 5
//
//Излез:
//
//1 2 3 4 5
//
//5 4 3 2 1
//
//5 3 1
//
//1 3 5

void pecatiNiza(int niza[], int n) {
    for(int i = 0; i < n; i++) {
        cout << niza[i] << " ";
    }
    cout << endl;
}

void prevrtiNiza(int niza[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int tmp = niza[i];
        niza[i] = niza[n - 1 - i];
        niza[n - 1 - i] = tmp;
    }
}

int otstraniSekojVtor(int niza[], int n) {
    for(int i = 1; i < n; i++) {
//        int num1 = niza[i];
//        int num2 = niza[2 * i];
        niza[i] = niza[2 * i];
        n--;
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    int niza[n];

    for(int i = 0; i < n; i++) {
        cin >> niza[i];
    }

    //Испечати ја низата
    pecatiNiza(niza, n);

    //Преврти ја низата
    prevrtiNiza(niza, n);
    pecatiNiza(niza, n);

    //Отстрани секој втор елемент
    n = otstraniSekojVtor(niza, n);
    pecatiNiza(niza, n);

    //Преврти ја низата
    prevrtiNiza(niza, n);
    pecatiNiza(niza, n);

    return 0;
}
