#include <iostream> // cout, string...
#include <iomanip> // setw...
#include <cstdio> // printf

int main() {
    std::string name = "Vamtiger";
    double number = 1061.2378;
    int fieldLength = 15;
    double pi = 3.14159265;

    // Configure std::cout to output more than the default 8 character precision.
    std::cout << std::setprecision(10);

    std::cout << "#\tNumber\n";
    std::cout << "1\t" << number << std::endl;

    std::cout << std::endl << std::endl << std::endl;

    std::cout << std::setw(5) << "Month" << std::setw(fieldLength) 
        << "Reading" << std::endl << std::endl; // Set the cout width;

    std::cout << std::setw(5) << 1 << std::setw(fieldLength) << number 
        << std::endl;

    std::printf("\n>> pi: %f\n\n", pi);
    std::printf(">> pi: %10f\n\n", pi); // Set number of places to print.
    std::printf(">> pi: %10.8f\n\n", pi); // Set decimal places.

    std::printf(">> Int: %d\n\n", fieldLength);
    std::printf(">> Int: %+d\n\n", fieldLength); // Show positive sign.

    std::printf(">> String: Hello there %s!\n\n", "Vamtiger");

    return 0;
}