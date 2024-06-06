#include <iostream>

//Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата,
// за која се бара бројот на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:
//
//int BrojPozitivni(int niza[], int n);
//
//Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

//Input
//2
//-2
//5
//Output
//1

//Input
//10
//1
//-2
//3
//4
//5
//-6
//7
//8
//9
//10
//Output
//8

using namespace std;

int brojPozitivni(int a[], int n) {
    if (n == 0) {
        if (a[n] > 0) {
            return 1;
        }

        return 0;
    }

    if (a[n] > 0) {
        return 1 + brojPozitivni(a, n - 1);
    }

    return brojPozitivni(a, n - 1);

}

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << brojPozitivni(a, n - 1);
    return 0;
}
