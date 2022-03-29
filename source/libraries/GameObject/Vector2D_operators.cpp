#include <iostream>
#include "Vector2D_operators.h"

std::ostream& operator<<(std::ostream& stream, const Vector2D& vect)
{
    return stream << "vector: " << "x=" << vect.m_x << ", y=" << vect.m_y << std::endl;
}

Vector2D operator+(const Vector2D& vect1, const Vector2D& vect2)
{
    return {vect1.m_x + vect2.m_x, vect1.m_y + vect2.m_y};
}

Vector2D operator-(const Vector2D& vect1, const Vector2D& vect2)
{
    return {vect1.m_x - vect2.m_x, vect1.m_y - vect2.m_y};
}

Vector2D operator*(const Vector2D& vect, float value)
{
    return {vect.m_x * value, vect.m_y * value};
}

Vector2D operator*(float value, const Vector2D& vect)
{
    return {vect.m_x * value, vect.m_y * value};
}

Vector2D operator/(const Vector2D& vect, float value)
{
    return {vect.m_x / value, vect.m_y / value};
}

Vector2D operator/(float value, const Vector2D& vect)
{
    return {vect.m_x / value, vect.m_y / value};
}