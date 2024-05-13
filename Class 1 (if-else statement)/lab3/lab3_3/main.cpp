#include <iostream>
#include <iomanip>

//Од тастатура се внесува четирицифрен број n што во себе содржи барем 2 цифри со вредност 5.
//
//КОЛЕГА на тој број е бројот кој на позициите на кои има петки во првиот број ќе има шестка во бројот КОЛЕГА. (Пр. колега на 5551 е 6661).
//
//На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број.
// Да се има во предвид дека некогаш може да биде поголем бројот n , а некогаш неговиот колега.
//
//Доколку бројот n не содржи најмалку 2 цифри петки, да се испечати порака за грешка како во тест примерите.


//Input
//5500
//Output
//Output
//20%

//Input
//1234
//Output
//Error
using namespace std;

int main() {
    int broj; // 5500
    cin >> broj;

    int delitel = 1000;
    int kolega = 0;
    int brojacNaPetki = 0;

    while (delitel) {
        int prvaCifra = broj / delitel % 10;

        if (prvaCifra == 5) {
            kolega = kolega * 10 + 6;
            ++brojacNaPetki;
        } else {
            kolega = kolega * 10 + prvaCifra;
        }


        delitel /= 10;
    }

    if (brojacNaPetki >= 2) {
        cout << (kolega - broj) / (float) broj * 100 << "%";
    } else {
        cout << "Error";
    }
    return 0;
}
