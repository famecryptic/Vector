#include "Vector3D.hpp"

template<class T>
Vector3D<T>::Vector3D(T x = 0, T y = 0, T z = 0) {}

template<class T>
Vector3D<T>::~Vector3D() {}


template class Vector3D<float>;
template class Vector3D<int>;

