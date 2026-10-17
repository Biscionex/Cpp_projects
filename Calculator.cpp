#include <iostream>
int main() {
    int a, b, choice;
    std::cout << "C++ Calculator" << std::endl;
    std::cout << "Operations : " << std::endl;
    std::cout << "1) Addition (+)" << std::endl;
    std::cout << "2) Subtraction (-)" << std::endl;
    std::cout << "3) Multiplication (*)" << std::endl;
    std::cout << "4) Division (/)" << '\n' << '\n';
    std::cout << "Enter choice (1-4) :  " << std::endl;
    std::cin >> choice;
    std::cout << "Enter 1st number : " << std::endl;
    std::cin >> a;
    std::cout << "Enter 2nd number : " << std::endl;
    std::cin >> b;   
    if (choice == 1){
        std::cout << "The sum of 1st and 2nd number is : " << a+b << std::endl;

    }
    else if (choice == 2){
        std::cout << "The difference of 1st and 2nd number is : " << a-b << std::endl;

    }
    else if (choice == 3){
        std::cout << "The product of 1st and 2nd number is : " << a*b << std::endl;

    }
    else if (choice == 4){
        std::cout << "The division of 1st and 2nd number is : " << a/b << std::endl;

    }
    else {
        std::cout << "Invalid choice" << std::endl;
    }
    return 0;
}