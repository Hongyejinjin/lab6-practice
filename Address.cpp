#include <iostream>

void passVal(int val)
{
    val = 20;
    std::cout << &val << " " << val << std::endl;
}

int main()
{
    int n{10};
    std::cout << &n << " " << n << std::endl;
    passVal(9);
    std::cout << &n << " " << n << std::endl;
    return 0;   
}