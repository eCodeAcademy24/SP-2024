#include <iostream>
//Од стандарден влез се чита еден природен број n, по што се читаат n цели броеви. Да се најде најголемата
// разлика помеѓу два броја, од вака внесените броеви.

//Input
//5
//1 2 -1 -7 6
//Output
//Najgolema razlika: 13

using namespace std;

int main() {
    int n, broj, max, min;

    cin >> n;
    cin >> broj;
    max = min = broj;
    for(int i = 1; i < n; i++) {
        cin >> broj;
        if(broj > max) {
            max = broj;
        }
        if(broj < min) {
            min = broj;
        }
    }

    cout << "Najgolema razlika: " << max - min;
    return 0;
}
