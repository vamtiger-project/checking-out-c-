#include <iostream>
#include <cmath>

int main() {
    int number1 = 10;
    int number2 = 100;
    const int number3 = 1000;
    int sum = number1 + number2 + number3;
    int sub = number3 - number2 - number1;
    int mul = number1 * number2 * number3;
    int divi = number3 / number2 / number1;
    int mod = number2 % number1; // Only for floats...must use math module.
    const double radius = 3;
    const double pi = 3.14159265;
    double circumference = 2 * pi * radius; // 2 * pi * r
    double area = pi * (radius * radius);
    double areaMath = pi * std::pow(radius, 2);
    const double sqroot = std::sqrt (144);
    const double abso = std::abs(-1345);
    const double mod2 = std::fmod(12, 5.5);
    double number4 = 1.678;

    std::cout << ">> Sum: " << sum << std::endl;
    std::cout << ">> Sub: " << sub << std::endl;
    std::cout << ">> Mul: " << mul << std::endl;
    std::cout << ">> Div: " << divi << std::endl;
    std::cout << ">> Mod: " << mod << std::endl;

    std::cout << ">> Cir: " << circumference << std::endl;
    std::cout << ">> Are: " << area << std::endl;
    std::cout << ">> AreMath: " << areaMath << std::endl;
    std::cout << ">> Sqrt: " << sqroot << std::endl;
    std::cout << ">> Abs: " << abso << std::endl;
    std::cout << ">> modMath: " << mod2 << std::endl;
    std::cout << ">> Type cast: " << (int)number4 << std::endl;

    return 0;
}