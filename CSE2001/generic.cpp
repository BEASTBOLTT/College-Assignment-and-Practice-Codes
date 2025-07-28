#include <iostream>

template <typename T>
T max(T a, T b, T c) {
    return (a > b)? (a > c)? a : c : (b > c)? b : c;
}

int main() {
    int int1, int2, int3;
    double double1, double2, double3;
    char char1, char2, char3;

    std::cout << "Enter three integers: ";
    std::cin >> int1 >> int2 >> int3;
    int largestInt = max(int1, int2, int3);

    std::cout << "Enter three doubles: ";
    std::cin >> double1 >> double2 >> double3;
    double largestDouble = max(double1, double2, double3);

    std::cout << "Enter three characters: ";
    std::cin >> char1 >> char2 >> char3;
    char largestChar = max(char1, char2, char3);

    std::cout << "Largest int: " << largestInt << std::endl;
    std::cout << "Largest double: " << largestDouble << std::endl;
    std::cout << "Largest char: " << largestChar << std::endl;

    return 0;
}