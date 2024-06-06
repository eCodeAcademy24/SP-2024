#include <iostream>
#include <cstring>

// Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката.
// Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран,
// секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
//
//Пример:
//
//IO is short for Input Output
//medioio medIo song
//#
//излез:
//
//io
//ou
//io
//oi
//io
//io
//6

//Input
//Didn't know what time it was and the lights were low
//I leaned back on my radio
//Some cat was layin' down some rock 'n' roll 'lotta soul, he said
//Then the loud sound did seem to fade
//Came back like a slow voice on a wave of phase
//That weren't no D.J. that was hazy cosmic jive
//
//There's a starman waiting in the sky
//He'd like to come and meet us
//But he thinks he'd blow our minds
//There's a starman waiting in the sky
//He's told us not to blow it
//'Cause he knows it's all worthwhile
//He told me
//Let the children lose it
//Let the children use it
//Let all the children boogie
//
//I had to phone someone so I picked on you
//Hey, that's far out so you heard him too
//Switch on the TV we may pick him up on Channel Two
//Look out your window I can see his light
//If we can sparkle he may land tonight
//Don't tell your poppa or he'll get us locked up in fright
//
//There's a starman waiting in the sky
//He'd like to come and meet us
//But he thinks he'd blow our minds
//There's a starman waiting in the sky
//He's told us not to blow it
//'Cause he knows it's all worthwhile
//He told me
//Let the children lose it
//Let the children use it
//Let all the children boogie
//
//Starman waiting in the sky
//He'd like to come and meet us
//But he thinks he'd blow our minds
//There's a starman waiting in the sky
//He's told us not to blow it
//'Cause he knows it's all worthwhile
//He told me
//Let the children lose it
//Let the children use it
//Let all the children boogie
//
//La, la, la, la, la, la, la, la
//La, la, la, la, la, la, la, la
//La, la, la, la, la, la, la, la
//La, la, la, la, la, la, la, la
//#
//Output
//ea
//io
//ou
//ai
//ou
//ou
//ee
//oi
//ai
//ee
//ou
//ai
//au
//oo
//ie
//eo
//ou
//ou
//ou
//ea
//oo
//oo
//ou
//ou
//ee
//ou
//ai
//ee
//ou
//ai
//au
//oo
//ie
//ai
//ee
//ou
//ai
//au
//oo
//ie
//40
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char str[100];
    int counter = 0;

    while (cin.getline(str, 100)) {

        if (strcmp(str, "#") == 0) { // ako se vnese # togash treba da izlezeme od while-ot
            break;
        }

        //I leaned back on my radio
        for (int i = 0; i < strlen(str); i++) {
            if (isVowel(tolower(str[i])) && isVowel(tolower(str[i + 1]))) {
                ++counter;
                cout << (char) tolower(str[i]) << (char) tolower(str[i + 1]) << endl;
            }
        }
    }

    cout << counter;
    return 0;
}
