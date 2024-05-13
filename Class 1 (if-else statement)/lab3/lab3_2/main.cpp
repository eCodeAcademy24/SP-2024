#include <iostream>
#include <cmath>
//Да се напише програма која што проверува дали една квадратна равенка има реални решенија и истите ги пресметува.
//
//Една квадратна равенка од облик aх2+ bх + c = 0 има две различни реални решенија доколку вредноста на изразот b^2 - 4ас е поголема од 0.
// Доколку вредноста на изразот е 0, равенката има едно двојно реално решение, а доколку изразот е помал од 0 равенката нема реални решенија.
//
//Влезот на програмата се коефициентите a, b и c на равенката.
//
//Доколку равенката има две различни решенија потребно е на излезот да се испише: "Reshenija na ravenkata se: " и да се наведат решенијата одвоени со сврзникот "i" .
//
//Доколку равенката има едно решение потребно е да се испечати: "Dvojno reshenie na ravenkata e: " и да се наведе решението.
//
//Доколку равенката нема решение потребно е да се испечати: "Ravenkata nema realni reshenija".

//Input
//1 2 1
//Output
//Dvojno reshenie na ravenkata e: -1.00

//Input
//-1 4 -7
//Output
//Ravenkata nema realni reshenija

//Input
//1 -5 6
//Output
//Reshenija na ravenkata se: 2.00 i 3.00

using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    float x1 = ((-b) - sqrt((b * b) - (4.0 * a * c))) / (2 * a);
    float x2 = ((-b) + sqrt((b * b) - (4.0 * a * c))) / (2 * a);
    if ((b * b) - (4.0 * a * c) > 0) {
        cout << "Reshenija na ravenkata se: " << x1 << " i " << x2 << endl;
    } else if ((b * b) - (4.0 * a * c) == 0) {
        cout << "Dvojno reshene na ravenkata e: " << x1 << endl;
    } else {
        cout << "Ravenkata nema realni reshenija" << endl;
    }
    return 0;
}
