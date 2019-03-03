#include "MyClass.h"

int main(){
    double a,b,c;
    std::cout <<"Podaj parametry a,b,c funkcji";
    std::cout <<"\na=";
    std::cin >> a;
    std::cout <<"\nb=";
    std::cin >> b;
    std::cout <<"\nc=";
    std::cin >> c;
    zero(a,b,c);

    return 0;
}