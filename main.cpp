#include <iostream>

#include "Vector3D.hpp"
#include "Matrix3D.hpp"
#include "Math.hpp"

int main()
{
    std::cout << "PI = " << PI << '\n';

    // VECTOR -------------------------------------------------------------------------------------
    std::cout << "\nVECTOR -------------------------------------------------------------------------" << '\n';
    Vector3D<float> v0;
    Vector3D<float> v1(1, 0, 0);
    Vector3D<float> v2(0, 0, 1);
    std::cout << "v0 = "; v0.printVector3D();
    std::cout << "v1 = "; v1.printVector3D();
    std::cout << "v2 = "; v2.printVector3D();

    // addition
    Vector3D<float> v3 = v1 + v2;
    std::cout << "v1 + v2 = "; v3.printVector3D();

    // subtraction
    Vector3D<float> v4 = v1 - v2;
    std::cout << "v1 - v2 = "; v4.printVector3D();

    // scalar multiplication
    float c = 10;
    Vector3D<float> v5 = c * v1;
    std::cout << "c * v1 = "; v5.printVector3D();

    // magnitude 
    std::cout << "|v1| = " << v1.getMagnitude() << '\n';

    // normalization
    v1.normalize();
    std::cout << "v1 / |v1| = "; v1.printVector3D();

    // MATRIX -------------------------------------------------------------------------------------
    std::cout << "\nMATRIX -------------------------------------------------------------------------" << '\n';
    Matrix3D<float> zero_matrix;
    std::cout << "zero matrix = \n"; zero_matrix.printMatrix3D();

    Matrix3D<float> A(1, 2, 3, 4, 5, 6, 7, 8, 9);
    std::cout << "A = \n"; A.printMatrix3D();

    Matrix3D<float> B(1, 7, 9, 9, 0, 5, 4, 3, 1);
    std::cout << "B = \n"; B.printMatrix3D();

    // matrix-vector multiplication
    Vector3D<float> v6 = A * v1;
    std::cout << "A(v1) = "; v6.printVector3D();

    // matrix-matrix multiplication
    Matrix3D<float> C = A * B;
    std::cout << "AB = \n"; C.printMatrix3D();

    // MATH ---------------------------------------------------------------------------------------
    std::cout << "\nMATH -------------------------------------------------------------------------" << '\n';
    // dot product
    float dot_product = Math::dot(v1, v2);
    std::cout << "v1 . v2 = " << dot_product << '\n';

    // cross product
    Vector3D<float> cross_product = Math::cross(v1, v2);
    std::cout << "v1 x v2 = "; cross_product.printVector3D();



    return 0;
}