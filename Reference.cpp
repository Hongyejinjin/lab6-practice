#include <iostream>

void passRef(int &ref)
{
    ref = 20;
    std::cout << &ref << " " << ref << std::endl;
}

int main()
{
    int n{10};
    std::cout << &n << " " << n << std::endl;
    passRef(n);
    std::cout << &n << " " << n << std::endl;
    return 0;
}