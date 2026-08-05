#include <iostream>
int main()
{
    int value{},palce_holder{};
    int number{}, sum{};

    std::cout << "Number: "; std::cin >> number;
    
    while (number != 0)
    {
        palce_holder = number;
        number /= 10;
        sum += palce_holder - (number*10);
    }

    std::cout << "Sum of Digits is " << sum;

    return 0;
}
