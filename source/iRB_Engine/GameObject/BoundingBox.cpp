#include "BoundingBox.h"

BoundingBox::BoundingBox()
{
    m_dimension = {0, 0};
}

BoundingBox::BoundingBox(const Vector2D& dimension)
{
    m_dimension = dimension;
}

BoundingBox::BoundingBox(float width,  float height)
{
    m_dimension = {width, height};
}

BoundingBox::~BoundingBox(){}

Vector2D BoundingBox::mTopRight(Vector2D position) const
{
    return {position + (m_dimension / 2)};
}

Vector2D BoundingBox::mBotLeft(Vector2D position) const
{
    return {position - (m_dimension / 2)};
}