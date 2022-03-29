#pragma once
#include "BoundingBox.h"
#include "Vector2D.h"
#include "Vector2D_operators.h"

class Actor
{
private:
    Vector2D m_position, m_speed;
    BoundingBox m_bounding_box;
    
public:
    Actor(const Vector2D& position, const Vector2D& speed, const Vector2D& dimension);

    Actor(const Vector2D& position, const Vector2D& speed, float width, float height);

    ~Actor();

    BoundingBox mGetBoundingBox() const;

    bool mIsColliding(Actor& actor) const;

    void mUpdate(float delta_t);

    Vector2D mGetPosition();
};
