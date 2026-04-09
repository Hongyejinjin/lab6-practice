#include <iostream>

void showVolume(int length, int width = 1, int height = 1);

int main()
{
    showVolume(4, 6, 2);
    showVolume(4, 6);
    showVolume(4);
    return 0;
}

void showVolume(int length, int width, int height)
{
    std::cout << "Volume of a box with Length(" << length << "), Width(" << width << "), Height(" << height << ") is " << length * width * height << std::endl;
}