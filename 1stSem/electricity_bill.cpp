#include <iostream>
int main()
{
    float rate{},unit{};

    std::cout << "Unit: "; std::cin >> unit;

    if      (unit < 100) { rate = 1.5;}
    else if ( unit>=100  && 200<unit) { rate = 2.5;}
    else if ( unit>=200  && 500<unit) { rate = 3.5;}
    else  { rate = 5.5;}

    float bill_amount {unit*rate};

    std::cout << "Bill Amount: " << bill_amount << std::endl;
    
    return 0;
}