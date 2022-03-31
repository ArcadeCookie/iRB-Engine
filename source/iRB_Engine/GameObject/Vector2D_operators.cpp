#include <iostream>
#include "Vector2D_operators.h"
#include <math.h>
#include <tgmath.h>

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

float magnitude(Vector2D vect)
{
    return pow(pow(vect.m_x, 2.0f) + pow(vect.m_y, 2.0f), 0.5f);
}

Vector2D rotate(Vector2D vect, float angle)
{
    return {magnitude(vect) * (float)sin(angle * PI / 180.0f), magnitude(vect) * (float)cos(angle * PI / 180.0f)};
}