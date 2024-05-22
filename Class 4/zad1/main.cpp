#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Од стандарден влез се чита број n а потоа се чита и низа составена од n реални броеви. На екран да се испечати елементот кој што е најблиску до
//средната вредност на елементите на низата.
int main() {
    int n;
    float a[100];
    float avg, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    avg = sum / n;
    float min = a[0], minNumber;
    for(int i = 0; i < n; i++) {
        int difference = fabs(a[i] - avg);
        if(difference < min) {
            min = difference;
            minNumber = a[i];
        }
    }

    cout << fixed << setprecision(2) << minNumber;
    return 0;
}
