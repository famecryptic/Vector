#pragma once
#include<iostream>

template<class T>
class Vector3D {
public:
    Vector3D(T x = 0, T y = 0, T z = 0) : x(x), y(y), z(z) {}
    ~Vector3D() {};

    T getX() const {return x;};
    T getY() const {return y;};
    T getZ() const {return z;};

    T getMagnitude() const;

    void normalize();

    template<typename F>
    friend Vector3D<F> operator+(const Vector3D<F>& v1, const Vector3D<F>& v2);

    template<typename F>
    friend Vector3D<F> operator-(const Vector3D<F>& v1, const Vector3D<F>& v2);

    template<typename F>
    friend Vector3D<F> operator*(const F scalar, const Vector3D<F>& v);

    template<typename F>
    friend Vector3D<F> operator*(const Vector3D<F>& v, const F scalar);

private:
    T x, y, z;
};

template<typename T>
T Vector3D<T>::getMagnitude() const
{
    T num = x * x + y * y + z * z;
    T sqrt_of_num;
    T f; T g;
    for (int i = 0; i < 10; i++)
    {
        if (i == 0) {sqrt_of_num = 1;}
        f = (sqrt_of_num * sqrt_of_num) - num;
        g = 2 * sqrt_of_num;
        sqrt_of_num -= (f / g);
    }

    return sqrt_of_num;
}

template<typename T>
void Vector3D<T>::normalize()
{
    T sqrt_of_num = getMagnitude();
    x /= sqrt_of_num;
    y /= sqrt_of_num;
    z /= sqrt_of_num;
}

template<typename F>
Vector3D<F> operator+(const Vector3D<F>& v1, const Vector3D<F>& v2)
{
    return Vector3D<F>(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

template<typename F>
Vector3D<F> operator-(const Vector3D<F>& v1, const Vector3D<F>& v2)
{
    return Vector3D<F>(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

template<typename F>
Vector3D<F> operator*(const F scalar, const Vector3D<F>& v)
{
    return Vector3D<F>(scalar * v.x, scalar * v.y, scalar * v.z);
}

template<typename F>
Vector3D<F> operator*(const Vector3D<F>& v, const F scalar)
{
    return Vector3D<F>(scalar * v.x, scalar * v.y, scalar * v.z);
}
