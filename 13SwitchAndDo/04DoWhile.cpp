#include <iostream>

int main() {
    int sum = 0, num = 1;

    do {
        sum += num;
        num ++;
    } while (num < 11);

    std::cout << ">> Sum = " << sum << std::endl;
}