#include <iostream>
#include <cmath>
using namespace std;

float volume(float r)
{
    // Volume of Sphere
    return ((M_PI * r * r * r * 4) / 3);
}

float volume(float r, float h)
{
    // Volume of Cylinder
    return (M_PI * r * r * h);
}

float volume(float l, float b, float h)
{
    // Volume of Cuboid
    return (l * b * h);
}

int main()
{
    // 5.Write a C++ program for calculating volume of sphere, cuboid and cylinder using function overloading.

    cout << "Volume of Sphere: " << volume(5.5) << endl;
    cout << "Volume of Cylinder: " << volume(5.5, 2) << endl;
    cout << "Volume of Cuboid: " << volume(5.5, 5.5, 5.5) << endl;

    return 0;
}