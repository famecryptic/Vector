#pragma once

#include<iostream>

#include "Vector3D.hpp"

template<class T>
class Matrix3D {
public:
    Matrix3D(T xx = 0, T xy = 0, T xz = 0, 
             T yx = 0, T yy = 0, T yz = 0,
             T zx = 0, T zy = 0, T zz = 0) 
            : xx(xx), xy(xy), xz(xz), yx(yx), yy(yy), yz(yz), zx(zx), zy(zy), zz(zz) {}
    ~Matrix3D() {};

    void printMatrix3D() const;

    T getXX() const {return xx;}; T getXY() const {return xy;}; T getXZ() const {return xz;};
    T getYX() const {return yx;}; T getYY() const {return yy;}; T getYZ() const {return yz;};
    T getZX() const {return zx;}; T getZY() const {return zy;}; T getZZ() const {return zz;};

    template<typename F>
    friend Vector3D<F> operator*(const Matrix3D<F>& A, const Vector3D<F>& v);

    template<typename F>
    friend Matrix3D<F> operator*(const Matrix3D<F>& A, const Matrix3D<F>& B);

private:
    T xx, xy, xz; 
    T yx, yy, yz;
    T zx, zy, zz;
};


template<class T>
void Matrix3D<T>::printMatrix3D() const
{   
    std::cout << xx << " " << xy << " " << xz << '\n';
    std::cout << yx << " " << yy << " " << yz << '\n';
    std::cout << zx << " " << zy << " " << zz << '\n';
}

template<typename F>
Vector3D<F> operator*(const Matrix3D<F>& A, const Vector3D<F>& v)
{
    return Vector3D<F>(A.xx * v.getX() + A.xy * v.getY() + A.xz * v.getZ(),
                       A.yx * v.getX() + A.yy * v.getY() + A.yz * v.getZ(),
                       A.zx * v.getX() + A.zy * v.getY() + A.zz * v.getZ());
}

template<typename F>
Matrix3D<F> operator*(const Matrix3D<F>& A, const Matrix3D<F>& B)
{
    return Matrix3D<F>(A.xx*B.xx + A.xy*B.yx + A.xz*B.zx, A.xx*B.xy + A.xy*B.yy + A.xz*B.zy, A.xx*B.xz + A.xy*B.yz + A.xz*B.zz,
                       A.yx*B.xx + A.yy*B.yx + A.yz*B.zx, A.yx*B.xy + A.yy*B.yy + A.yz*B.zy, A.yx*B.xz + A.yy*B.yz + A.yz*B.zz,
                       A.zx*B.xx + A.zy*B.yx + A.zz*B.zx, A.zx*B.xy + A.zy*B.yy + A.zz*B.zy, A.zx*B.xz + A.zy*B.yz + A.zz*B.zz);
                       
}                   