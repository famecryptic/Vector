#include  "Matrix3D.hpp"

template<class T>
Matrix3D<T>::Matrix3D(T xx = 0, T xy = 0, T xz = 0,
                      T yx = 0, T yy = 0, T yz = 0,
                      T zx = 0, T zy = 0, T zz = 0) {}

template<class T>
Matrix3D<T>::~Matrix3D() {}

template class Matrix3D<float>;
template class Matrix3D<int>;