#include <iostream>
//Дефинирајте ја рекурзивната функција "sumOfDigits(int number)" така што за дадениот аргумент "number"
// ќе ја пресмета сумата на сите негови цифри. Пример за аргумент "1234" функцијата треба да врати 1 + 2 + 3 + 4 = 10.
//
//Не правете промени во дадената main функција, само дефинирајте ја рекурзивната функција.

//Input
//1
//1234567890
//Output
//45
//45

//Input
//10
//669
//4531
//312
//11
//53
//61341
//13412
//123
//753
//1
//Output
//21
//13
//6
//2
//8
//15
//11
//6
//15
//1
//98
using namespace std;

int sumOfDigits(int number) {
    if (number < 10)
        return number;
    else
        return number % 10 + sumOfDigits(number / 10);
}

int main() {
    int n, i;
    cin >> n;
    int sum = 0;

    for (i = 0; i < n; i++) {
        int current;
        cin >> current;
        sum += sumOfDigits(current);
        cout << sumOfDigits(current) << endl;
    }

    cout << sum;
    return 0;
}
