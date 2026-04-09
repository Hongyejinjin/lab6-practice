#include <iostream>

double unitPrice(double diameter, double price);

double unitPrice(double length, double width, double price);

int main()
{
    int diameter{}, length{}, width{};
    double priceRound{}, unitPriceRound{}, priceRectangular{}, unitPriceRectangular{};

    std::cout << "Welcome to the Pizza Consumers Union." << std::endl;
    std::cout << "Enter the diameter in inches of a round pizza: ";
    std::cin >> diameter;
    std::cout << "Enter the price of a round pizza: $";
    std::cin >> priceRound;
    std::cout << "Enter length and width in inches of a rectangular pizza: ";
    std::cin >> length >> width;
    std::cout << "Enter the price of rectangular pizza: $";
    std::cin >> priceRectangular;
    unitPriceRound = unitPrice(diameter, priceRound);
    unitPriceRectangular = unitPrice(length, width, priceRectangular);
    std::cout << "Round pizza: Diameter: " << diameter << "inches" << std::endl;
    std::cout << "Price: $" << priceRound << " Per square inch: $" << unitPriceRound << std::endl;
    std::cout << "Rectangular pizza: Length and Width: " << length << " and " << width << " inches" << std::endl;
    std::cout << "Price: $" << priceRectangular << " Per square inch: $" << unitPriceRectangular << std::endl;
    
    if (unitPriceRound < unitPriceRectangular)
        std::cout << "The round one is the better buy." << std::endl;
    else
        std::cout << "The rectangular one is the better buy." << std::endl;
    std::cout << "Buon Appetito!" << std::endl;
    return 0;
}

double unitPrice(double diameter, double price)
{
    const double pi{ 3.14159 };
    double radius{}, area{};
    
    radius = diameter / static_cast<double>(2);
    area = pi * radius * radius;
    return price / area;
}
double unitPrice(double length, double width, double price)
{
    double area{ length * width };
    return price / area;
}
