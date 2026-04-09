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
//
//Pass-by-reference.cpp//

void getNumbers(int& input1, int& input2);
void swapValues(int& varable1, int& variable2);
void showResults(int output1, int output2);

int main()
{
    int firstNum{}, secondNum{};
    getNumbers(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);
    return 0;   
}

void getNumbers(int& input1, int& input2)
{
    std::cout << "Enter two integers: ";
    std::cin >> input1 >> input2;
}
void swapValues(int& variable1, int& variable2)
{
    int temp{variable1};
    variable1 = variable2;
    variable2 = temp;
}
void showResults(int output1, int output2)
{
    std::cout << "In reverse order the numbers are: " << output1 << " " << output2 << std::endl;
}