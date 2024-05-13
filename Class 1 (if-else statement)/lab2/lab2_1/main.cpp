#include <iostream>
//Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка.
// Потоа, во нов ред се внесува сумата на еден производ кој го купил, на кој дополнително треба да плати и ДДВ(18% од таа сума).
// Програмата печати 1 доколку после плаќањето на ДДВ корисникот има барем 1 денар на својата сметка, а 0 во спротивно.
//
//input: 25600
//       10000
//output: 1

//Input: 25600 25500
//Output: 0

using namespace std;

int main() {
    float iznos_pari, suma_proizvod;
    cin >> iznos_pari >> suma_proizvod;

    // moze i suma_proizvod + (suma_proizvod * 0.18)
    float suma_po_ddv = suma_proizvod * 1.18;

    if((iznos_pari - suma_po_ddv) > 0) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}
