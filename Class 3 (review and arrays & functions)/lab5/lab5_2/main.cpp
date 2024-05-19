#include <iostream>
//Да се напише програма која ќе прочита два природни броја. Програмата треба да провери дали сите цифри од првиот број се
// појавуваат во вториот број.
//Ако овој услов е исполнет, програмата печати DA, во спротивно NE.

//Input
//421988 4111992
//Output
//NE

//Input
//3322 123
//Output
//DA
using namespace std;

int main() {
    int prv, vtor;

    cin >> prv >> vtor;

    int tmpPrv = prv;
    while (tmpPrv) {
        int tmpVtor = vtor;
        int flag = 0;
        while (tmpVtor) {
            if (tmpPrv % 10 == tmpVtor % 10) {
                flag = 1;
                break;
            }

            tmpVtor /= 10;
        }

        if (flag == 0) {
            cout << "NE";
            return 0;
        }

        tmpPrv /= 10;
    }

    cout << "DA";
    return 0;
}
