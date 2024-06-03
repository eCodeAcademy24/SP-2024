#include <iostream>
#include <string.h>

/*Да се напише функција која ќе одредува дали една текстуална
 *низа е подниза на друга текстуална низа.

Пример
face е подниза на Please faceAbook*/

//Input
// Please faceAbook
// face
//Output
// YES

using namespace std;

bool podstring(char str1[], char str2[]) {
    if (strlen(str1) < strlen(str2)) {
        return false;
    }


    for (int i = 0; i < strlen(str1); i++) {
        bool flag = false;

        if (str1[i] == str2[0]) {
            flag = true;
            int tmp = i + 1;
            for (int j = 1; j < strlen(str2); j++) {
                if (str2[j] != str1[tmp]) {
                    flag = false;
                    break;
                }

                tmp++;
            }
        }

        if (flag) {
            return true;
        }
    }

    return false;
}

bool podstring2(char str1[], char str2[]) {
    if (strlen(str1) < strlen(str2)) {
        return false;
    }

    for (int i = 0; i < strlen(str1); i++) {
        bool flag = false;

        if (str1[i] == str2[0]) {
            flag = true;
            for (int j = 1; j < strlen(str2); j++) {
                if (str2[j] != str1[i + j]) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            return true;
        }
    }

    return false;
}

int main() {
    char str1[100], str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    if (podstring2(str1, str2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
