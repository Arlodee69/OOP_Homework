#include <iostream>
#include "include/closest_pair.h"

int main() {
    int number;
    std::cin >> number;
    
    int m, n;
    closest_pair_tonum(number, m, n);
    std::cout << "(" << m << ", " << n << ")" << std::endl;
    return 0;
}