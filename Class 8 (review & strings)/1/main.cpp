#include <iostream>
#include <cstring>
#include <ctype.h>

/*Да се напише функција што ќе одредува колку пати даден знак се наоѓа во
даден стринг. Знакот за споредување и стрингот се внесуваат од тастатура.
Пример
За стрингот
HELLO FINKI
знакот 'L' се појавува 2 пати.*/

//Input
// HELLO FINKI
// L
// Output
// 2

using namespace std;

int pojavuvanje_znak(char str[], char c) {
    int counter = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == tolower(c)) {
            // if (str[i] == c)
            ++counter;
        }
    }

    return counter;
}

int pojavuvanje_znak1(char *str, char c) {
    int counter = 0;
    while (*str != '\0') {
        if (tolower(*str) == tolower(c)) {
            // if(*str == c)
            ++counter;
        }

        str++;
    }

    return counter;
}

//TODO: try with []
int pojavuvanje_znak2(char *str, char c) {
    if (*str == '\0') {
        return 0;
    }

    if (*str == c) {
        return 1 + pojavuvanje_znak2(++str, c);
    }

    return pojavuvanje_znak2(++str, c);
}

int main() {
    char str[100];
    // cin >> str;
    cin.getline(str, 100);

    char c;
    cin >> c;

    cout << "So []: " << pojavuvanje_znak(str, c) << endl;
    cout << "So *: " << pojavuvanje_znak1(str, c) << endl;
    cout << "So rekurzija: " << pojavuvanje_znak2(str, c) << endl;
    return 0;
}
