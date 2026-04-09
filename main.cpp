#include <iostream>

const double gRate(150.00);
double fee(int hoursWorked, int minutesWorked);

int main()
{
    int hours{}, minutes{};
    double bill{};
    std::cout << "Welcome to the law office of Dewey, Cheathan, and Howe. The law office witha heart.\n" << "Enter the hours and minutes of your consultation: ";
    std::cin >> hours >> minutes;

    bill = fee(hours, minutes);

    std::cout << "For " << hours << "hours and" << minutes << "minutes, your bill is $" << bill << std::endl;
    return 0;
}

double fee(int hoursWorked, int minutesWorked)
{
    int quarterHours{};
    minutesWorked = hoursWorked * 60 + minutesWorked;
    quarterHours = minutesWorked / 15;
    return quarterHours * gRate;
}