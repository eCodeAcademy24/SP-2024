#include <iostream>
#include <string.h>

/*Да се напише функција што ќе ја одредува должината на една текстуална низа.
Да се даде итеративно и рекурзивно решение.
Пример
Ако на функцијата како аргумент и се предаде стрингот
zdravo!
тогаш таа треба да врати: 7*/
//Input
// zdravo!
// Output
// 7
using namespace std;

int dolzhina_string(char str[]) {
    int counter = 0;
    for (int i = 0; i < strlen(str); i++) {
        ++counter;
    }

    return counter;
}

int dolzhina_string1(char *str) {
    int counter = 0;
    while (*str != '\0') {
        ++counter;
        ++str;
    }

    return counter;
}

int dolzhina_string2(char *str) {
    if (*str == '\0') {
        return 0;
    }

    return 1 + dolzhina_string2(str + 1);
}

int dolzhina_string3(char str[], int n) {
    if (n == 0) {
        return 1;
    }

    return 1 + dolzhina_string3(str, n - 1);
}


int main() {
    char str[100];
    cin.getline(str, 100);

    cout << "Prv nachin: " << strlen(str) << endl;
    cout << "Vtor nachin: " << dolzhina_string(str) << endl;
    cout << "Tret nachin: " << dolzhina_string1(str) << endl;
    cout << "Cetvrt nachin: " << dolzhina_string2(str) << endl;
    cout << "Petti nachin: " << dolzhina_string3(str, strlen(str) - 1) << endl;
    return 0;
}
