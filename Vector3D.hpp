#pragma once


template<class T>
class Vector3D {
private:
    T x, y, z;
public:
    Vector3D(T x = 0, T y = 0, T z = 0) : x(x), y(y), z(z) {}
    ~Vector3D() {};

    T getX() const {return x;};
    T getY() const {return y;};
    T getZ() const {return z;};

    template<class F>
    friend Vector3D<F> operator+(const Vector3D<F>& v1, const Vector3D<F>& v2);

    template<class F>
    friend Vector3D<F> operator-(const Vector3D<F>& v1, const Vector3D<F>& v2);

    template<class F>
    friend Vector3D<F> operator*(const F scalar, const Vector3D<F>& v);

    template<class F>
    friend Vector3D<F> operator*(const Vector3D<F>& v, const F scalar);
};


template<class F>
Vector3D<F> operator+(const Vector3D<F>& v1, const Vector3D<F>& v2)
{
    return Vector3D<F>(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

template<class F>
Vector3D<F> operator-(const Vector3D<F>& v1, const Vector3D<F>& v2)
{
    return Vector3D<F>(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

template<class F>
Vector3D<F> operator*(const F scalar, const Vector3D<F>& v)
{
    return Vector3D<F>(scalar * v.x, scalar * v.y, scalar * v.z);
}

template<class F>
Vector3D<F> operator*(const Vector3D<F>& v, const F scalar)
{
    return Vector3D<F>(scalar * v.x, scalar * v.y, scalar * v.z);
}
