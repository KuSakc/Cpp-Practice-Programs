#include <iostream>
int main()
{
    int a,b;

    std::cout << "Value of A: "; std::cin >> a;
    std::cout << "Value of B: "; std::cin >> b;

    a= a+b;
    b= a-b;
    a= a-b;

    std::cout << "Value of A is " << a;
    std::cout << "Value of B is " << b;

    return 0;
1}

