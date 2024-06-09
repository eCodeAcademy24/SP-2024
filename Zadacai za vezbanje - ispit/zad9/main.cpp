#include <iostream>
using namespace std;
//Да се имплементира рекурзивна функција која за низа од цели броеви
//$[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата
//дропка дефинирана како:

// v=a0+1a1+...1an−2+1an−1

// Да се напише програма во која се чита цел број N, по што се читаат
// елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува
// рекурзивната функција и се печати резултатот во нов ред.

//Input
// 50
// 50 8 43 32 29 4 23 26 17 16 30 16 20 42 41 24 36 27 38 43 22 10 27 14 48 21 20 40 36 13 10 28 33 3 8 3 6 49 23 23 12 31 37 33 12 47 32 42 16 1
//Output
//50.124638

//Input
//
//3
//0 3 2
//Output
//0.285714
double recursion(int array[], int n, int index) {
    if (index == n - 1) {
        return array[index]; // mozhe tuka i n - 1 poradi toa shto se ednakvi n - 1 so index
    }

    return array[index] + (1 / recursion(array, n, index + 1));
}

int main() {
    int n;
    cin >> n;

    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << recursion(array, n, 0);
    return 0;
}
