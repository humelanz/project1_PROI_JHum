#include "MyClass.h"

double delta(double i, double j, double k){
    double n;
    n=pow(j,TWO)-(FOUR*i*k);
    return n;
}

void zero(double a, double b, double c){
    double x1, x2, d;
    d=delta(a,b,c);

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    if (d>ZERO){
        x1=(-b+sqrt(d))/(TWO*a);
        x2=(-b-sqrt(d))/(TWO*a);
        std::cout << "Miejsce zerowe funkcji to x1="<<x1<<" oraz x2="<<x2<<"\n";
    }
    else if (d==ZERO) {
        x1=(-b)/(TWO*a);
        std::cout << "Miejsce zerowe funkcji to x="<<x1<<"\n";
    }
    else std::cout << "Funkcja nie posiada miejsc zerowych\n";
}

