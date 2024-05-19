#include <iostream>
//Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.
//
//Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, а непарните ќе се намалат за 1.
//
//Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.

//Input
//5
//1 2 3 4 5
//Output
// 0 3 2 5 4
using namespace std;

void transformacija(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i]++;
        } else if (a[i] % 2 != 0) {
            a[i]--;
        }
    }
}

void pecatenje(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}



int main() {
    int n, a[100], i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    transformacija(a, n);
    pecatenje(a, n);
    return 0;

}
