#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални
//знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
//
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од
//од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!".
//Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
//
//Влез:
//
//9
//
//a!bcdedcb!a
//
//Kfd?vsvv98_89vvsv?dfK
//
//Ccsvsdvdfv
//
//342425vbbcb
//
//352!2353696969625
//
//gdg??dfg!!
//
//5336346644747
//
//8338736767867
//
//12344321
//
//Излез:
//
//Kfd?vsvv98_89vvsv?dfK

bool isPalindrome(char *line) {
    int n = strlen(line);
    for (int i = 0; i < n / 2; i++) {
        if (line[i] != line[n - i - 1]) {
            return false;
        }
    }

    return true;
}

bool hasSpecChar(char *line) {
    for (int i = 0; i < strlen(line); i++) {
        if (!isalnum(line[i])) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    char line[100];
    char maxLine[100];
    bool flag = false;
    bool isFirstTime = true;

    for (int i = 0; i < n; i++) {
        cin >> line;

        if (isPalindrome(line) && hasSpecChar(line)) {
            if (isFirstTime) {
                strcpy(maxLine, line);
                flag = true;
                isFirstTime = false;
                continue;
            }

            if (strlen(line) > strlen(maxLine)) {
                strcpy(maxLine, line);
            }
        }
    }

    if (flag) {
        cout << maxLine;
    } else {
        cout << "Nema!";
    }

    return 0;
}