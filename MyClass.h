#ifndef PROJECT1_PROI_JHUM_ZEROHEAD_H

#define TWO 2
#define ZERO 0
#define FOUR 4

#include<iostream>
#include<iomanip>
#include<cmath>

class Function
{   public:
    double a,b,c;
    void readF() {
        std::cout << "Podaj parametry a,b,c funkcji";
        std::cout << "\na=";
        std::cin >> a;
        std::cout << "\nb=";
        std::cin >> b;
        std::cout << "\nc=";
        std::cin >> c;
    }
};

double delta(double i, double j, double k);
void zero(double a, double b, double c);

#endif
