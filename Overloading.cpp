#include <iostream>

double average(double n1, double n2);
double average(double n1, double n2, double n3);

int main()
{
    std::cout << "The average of 2.0, 2.5, and 3.0 is " << average(2.0, 2.5, 3.0) << std::endl;
    std::cout << "The average of 4.5 and 5.5 is " << average(4.5, 5.5) << std::endl;
    return 0;
}

double average(double n1, double n2)
{
    return (n1 + n2) / 2.0;
}

double average(double n1, double n2, double n3)
{
    return (n1 + n2 + n3) / 3.0;
}