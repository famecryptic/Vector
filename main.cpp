#include <iostream>

#include "Vector3D.hpp"

int main()
{
    Vector3D<float> vec_1(2.0f, 10.0f, 2.0f);
    Vector3D<float> vec_2(4.0f, 5.0f, 3.0f);
    std::cout << "Components: " << vec_1.getX() << ", " << vec_1.getY() << ", " << vec_1.getZ() << '\n';
    std::cout << "Components: " << vec_2.getX() << ", " << vec_2.getY() << ", " << vec_2.getZ() << '\n';

    Vector3D<float> vec_3 = vec_1 + vec_2;
    std::cout << "Components: " << vec_3.getX() << ", " << vec_3.getY() << ", " << vec_3.getZ() << '\n';

    Vector3D<float> vec_4 = vec_1 - vec_2;
    std::cout << "Components: " << vec_4.getX() << ", " << vec_4.getY() << ", " << vec_4.getZ() << '\n';

    float scalar = 5.0f;
    Vector3D<float> vec_5 = scalar * vec_3;
    std::cout << "Components: " << vec_5.getX() << ", " << vec_5.getY() << ", " << vec_5.getZ() << '\n';

    Vector3D<float> vec_6(5.0f, 2.0f, 10.78f);
    std::cout << "Components: " << vec_6.getX() << ", " << vec_6.getY() << ", " << vec_6.getZ() << '\n';
    vec_6.normalize();
    std::cout << "Normalized: " << vec_6.getX() << ", " << vec_6.getY() << ", " << vec_6.getZ() << '\n';


    return 0;
}