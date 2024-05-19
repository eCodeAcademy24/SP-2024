#include <iostream>

//За дадена низа со големина N, прочитајте ги сите елементи од дадениот влез, а потоа сортирајте ја низата. Испечатете ја во растечки редослед.
//
//Пример:
//
//Влез:
//
//5
//
//4 3 2 5 1
//
//Излез:
//
//1 2 3 4 5

using namespace std;

int main() {

    int n;

    cin >> n;

    int a[100];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
//                swap(a[i], a[j]);
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }


    return 0;
}
