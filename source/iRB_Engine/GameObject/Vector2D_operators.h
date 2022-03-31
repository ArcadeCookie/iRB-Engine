#pragma once
#include <iostream>
#include "Vector2D.h"

#define PI 3.14159265

std::ostream& operator<<(std::ostream& stream, const Vector2D& vect);

Vector2D operator+(const Vector2D& vect1, const Vector2D& vect2);

Vector2D operator-(const Vector2D& vect1, const Vector2D& vect2);

Vector2D operator*(const Vector2D& vect, float value);

Vector2D operator*(float value, const Vector2D& vect);

Vector2D operator/(const Vector2D& vect, float value);

Vector2D operator/(float value, const Vector2D& vect); 

float magnitude(Vector2D vect);

Vector2D rotate(Vector2D vect, float angle);