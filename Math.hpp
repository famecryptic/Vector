#pragma once

#include "Vector3D.hpp"

namespace Math
{
    template<typename T>    
    T dot(const Vector3D<T>& v1, const Vector3D<T>& v2)
    {
        return v1.getX() * v2.getX() + v1.getY() * v2.getY() + v1.getZ() * v2.getZ();
    }
    
    template<typename T>
    Vector3D<T> cross(const Vector3D<T>& v1, const Vector3D<T>& v2)
    {
        T a = v1.getY() * v2.getZ() - v1.getZ() * v2.getY(); 
        T b = v1.getZ() * v2.getX() - v1.getX() * v2.getZ();
        T c = v1.getX() * v2.getY() - v1.getY() * v2.getX();
        return Vector3D<T>(a, b, c);
    }
}