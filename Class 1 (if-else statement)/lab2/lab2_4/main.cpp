#include <iostream>

using namespace std;

//Во градот постојат 2 такси компании. Едната наплаќа фиксна цена C денари за првите К километри, а за секој нареден
// километар наплаќа уште P денари. Другата такси компанија има возила кои возат со брзина V километри во минута,
// а наплаќа B денари пред почетокот на возењето, за секој извозен километар уште D денари и дополнително за секоја
// минута возење наплаќа М денари. Ваша задача е за даден број на километри до дестинацијата да пресметате со која
// такси компанија најмногу ви се исплати да се возите.
//
//Влез: Во првата линија е даден бројот на километри до дестинацијата. Во наредната линија се дадени C, K и P.
// Во третата и последна линија се дадени V, B, M и D.
//
//Излез: Во првиот ред се печатат цените на двете компании одвоени со празно место, а во вториот ред се печати 1
// доколку цената за возење со првата компанија е помала или еднаква на цената на возење со втората компанија,
// се печати 0 инаку.
//
//Пример: За влезот
//
//13
//6 7 4
//4 2 1 2
//
//Се добива дека првата компанија ќе наплати 6 + (13 - 7) * 4 = 30
//
//Втората компанија ќе се наплати 2 + [13 / 4] * 1 + 13 * 2 = 31
int main() {
    // taski kompanija 1
    int c, k, p;
    // taksi kompanija 2
    int v, b, d, m;
    int kilometri;
    int kompanija1, kompanija2;

    cin >> kilometri;
    cin >> c >> k >> p;
    cin >> v >> b >> d >> m;

    kompanija1 = c + (kilometri - k) * p;
    kompanija2 = b + (kilometri / v) * d + kilometri * m;

    if (kompanija1 <= kompanija2) {
        cout << "1";
    } else {
        cout << "0";
    }
        return 0;
}
