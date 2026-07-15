#include <iostream>
#include <math.h>

int main()
{
    int a,b,c;
    double area,s;

    std::cout << "Value of side A: ";std::cin >> a;
    std::cout << "Value of side B: ";std::cin >> b;
    std::cout << "Value of side C: ";std::cin >> c;

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    std::cout << "Area is " << area << std::endl;

    return 0;
}