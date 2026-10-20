#include <iostream> 
#include <cmath>

int main() {
    double temp, new_temp;
    char unit;
    std::cout << "~~~Temperature conversion calculator~~~" << std::endl;
    std::cout << " Enter temperature : " << std::endl;
    std::cin >> temp;
    std:: cout << " Enter unit [C / F] : " << std::endl;
    std::cin >> unit;
    std::cout << "Temperature entered is : " << temp << " " << unit << std::endl;

    if (unit == 'C' || unit == 'c') {
        new_temp = (temp * 9/5) - 32;
        std::cout << "Temperature in Fahrenheit is : " << new_temp << " F" << std::endl;
    }
    else if (unit == 'F' || unit == 'f') {
        new_temp = (temp -32) * 5/9;
        std::cout << "Temperature in Celsius is : " << new_temp << " C" << std::endl;
    }
    else {
        std::cout << "Invalid unit entered." << std::endl;
    }

    return 0;
}