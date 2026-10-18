#include <iostream>
#include <cmath>
int main() {
    const double PI = 3.14159;
    double a, b, c, d, e, f, r, s;
    double peri, area, cir;
    int choice;
    std::cout << "Area and perimeter calculator" << std::endl;
    std::cout << "Shapes : " << std::endl;
    std::cout << "1) Square " << std::endl;
    std::cout << "2) Rectangle " << std::endl;
    std::cout << "3) (Right) Triangle " << std::endl;
    std::cout << "4) (General) Triangle " << std::endl;
    std::cout << "5) Regular Pentagon " << std::endl;
    std::cout << "6) Regular Hexagon " << std::endl;
    std::cout << "7) Circle " << std::endl << '\n';
    std::cout << "Enter choice shape (1-7) : " << std::endl;
    std::cin >> choice;
    if (choice == 1){
        std::cout << "Enter side of square (cm) : " << std::endl;
        std::cin >> a;
        peri = 4 * a;
        std::cout << "Perimeter of square is : " << peri << " cm" << std::endl;
        area = a * a;
        std::cout << "Area of square is : " << area << " cm^2" << std::endl;

    }
    else if (choice == 2){
        std::cout << "Enter length (cm) : " << std::endl;
        std::cin >> a;
        std::cout << "Enter breadth (cm) : " << std::endl;
        std::cin >> b;
        peri = 2 * (a + b);
        std::cout << "Perimeter of rectangle is : " << peri << " cm" << std::endl;
        area = a * b;
        std::cout << "Area of rectangle is : " << area << " cm^2" << std::endl;

    }
    else if (choice == 3){
        std::cout << "Enter base (cm) : " << std::endl;
        std::cin >> a;
        std::cout << "Enter height (cm) : " << std::endl;
        std::cin >> b;
        std::cout << "Enter hypotenuse (cm) : " << std::endl;
        std::cin >> c;
        peri = a + b + c;
        std::cout << "Perimeter of triangle is : " << peri << " cm" << std::endl;
        area = 0.5 * a * b;
        std::cout << "Area of triangle is : " << area << " cm^2" << std::endl;

    }
    else if (choice == 4){
        std::cout << "Enter first side (cm) : " << std::endl;
        std::cin >> a;
        std::cout << "Enter first side (cm) : " << std::endl;
        std::cin >> b;
        std::cout << "Enter first side (cm) : " << std::endl;
        std::cin >> c;
        peri = a + b + c ;
        std::cout << "The perimeter of triangle is : " << peri << " cm" << std::endl;
        s = (a + b + c) / 2;
        area = std::sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "Area of triangle is : " << area << " cm^2" << std::endl;

    }
    else if (choice == 5){
        std::cout << "Enter side of pentagon (cm) : " << std::endl;
        std::cin >> a;
        peri = 5 * a;
        std::cout << "Perimeter of pentagon is : " << peri << " cm" << std::endl;
        area = 0.25 * std::sqrt(5 * (5 + 2 * (5^(1/2)))) * a * a;
        std::cout << "Area of pentagon is : " << area << " cm^2" << std::endl;

    }
    else if (choice == 6){
        std::cout << "Enter side of hexagon (cm) : " << std::endl;
        std::cin >> a;
        peri = 6 * a;
        std::cout << "Perimeter of hexagon is : " << peri << " cm" << std::endl;
        area = (( 3 * std::sqrt(3) ) / 2 ) * a * a;
        std::cout << "Area of hexagon is : " << area << " cm^2" << std::endl;

    }
    else if (choice == 7){
        std::cout << "Enter radius of circle (cm) : " << std::endl;
        std::cin >> r;
        cir = 2 * PI * r;
        std::cout << "Circumference of circle is : " << cir << " cm" << std::endl;
        area = PI * r * r;
        std::cout << "Area of circle is : " << area << " cm^2" << std::endl;

    }
    else{
        std::cout<< "Invalid choice!"<<std::endl;
    }

    return 0;

}