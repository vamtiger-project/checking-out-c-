#include <iostream>

int main() {
    double balance, rate;
    int years = 0;

    balance = 5000;

    std::cout << ">> What is the interest rate? ";
        std::cin >> rate;

    do {
        balance *= rate;

        years ++;
    } while (balance < 10000);

    std::cout << ">> It will take " << years << " years to reach $10,000.00" 
        << std::endl;
}