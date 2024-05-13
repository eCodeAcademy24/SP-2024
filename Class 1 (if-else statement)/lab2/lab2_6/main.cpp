#include <iostream>
using namespace std;
//Да се напише програма каде од тастатура ќе се внесе еден број кој има пет цифри, но не мора да е петцифрен,
// како на пример 04569 или 00256. Програмата ги печати сумите на паровите цифри од надвор кон внатре, за на крај да
// ја испечати средишната цифра. Така, ако внесениот број е 12596, програмата враќа 7 11 5.
//
//влез: 12596
//излез: 7 11 5

//Input
//90008
//Output
// 17 0 0
int main() {
    int number;
    cin >> number;

    // [1]259[6]
    int zbir_prva_posledna = number % 10 + number / 10000;

    // 1[2]5[9]6
    int zbir_vtor_pred_posledna = number / 1000 % 10 + number % 100 / 10;

    // 12[5]96
    int sredishna_cifra = number / 100 % 10;

    cout << zbir_prva_posledna << " " << zbir_vtor_pred_posledna << " " << sredishna_cifra;
    return 0;
}
