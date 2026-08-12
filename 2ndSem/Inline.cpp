#include <iostream>

inline int square(int x) {
    return x * x;
}

int main() {
    std::cout << "Square of 5 is " << square(5) << std::endl; 
    return 0;
}
