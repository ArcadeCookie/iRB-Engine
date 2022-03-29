#pragma once
#include "Vector2D.h"
#include "Vector2D_operators.h"

class BoundingBox
{
private:
    Vector2D m_dimension;
    
public:
    BoundingBox();

    BoundingBox(const Vector2D& dimension);

    BoundingBox(float width, float height);

    ~BoundingBox();

    Vector2D mTopRight(Vector2D position) const;

    Vector2D mBotLeft(Vector2D position) const;
};
