#include <iostream>

//Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG) ќе испечати на стандарден излез порака DA или NEво зависност од тоа дали внесениот датум е правилен или не.
//
//При одредување на валидноста на датумот во предвид да се земат сите фактори:
//
//    дали месецот е број помеѓу 1 и 12
//    дали денот одговара со бројот на денови во тој месец
//    доколку е 29.02. да се внимава дали станува збор за престапна година
//        престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.

//Input
//29 02 2140
//DA
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
