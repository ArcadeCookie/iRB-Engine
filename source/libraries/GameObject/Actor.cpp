#include "Actor.h"

Actor::Actor(const Vector2D& position, const Vector2D& speed, const Vector2D& dimension)
{
    m_position = position;
    m_speed = speed;
    m_bounding_box = BoundingBox(dimension);
}

Actor::Actor(const Vector2D& position, const Vector2D& speed, float width, float height)
{
    m_position = position;
    m_speed = speed;
    m_bounding_box = BoundingBox(width, height);
}

Actor::~Actor(){};

BoundingBox Actor::mGetBoundingBox() const
{
    return m_bounding_box;
}

bool Actor::mIsColliding(Actor& actor) const
{
    BoundingBox actorBoundingBox = actor.mGetBoundingBox();
    Vector2D actorTopRight = actorBoundingBox.mTopRight(actor.m_position);
    Vector2D actorBotLeft = actorBoundingBox.mBotLeft(actor.m_position);
    actorBoundingBox.~BoundingBox();
    Vector2D selfTopRight = m_bounding_box.mTopRight(m_position);
    Vector2D selfBotLeft = m_bounding_box.mBotLeft(m_position);
    bool xCollision = (selfBotLeft.m_x <= actorBotLeft.m_x && actorBotLeft.m_x <= selfTopRight.m_x) 
                        || (selfBotLeft.m_x <= actorTopRight.m_x && actorTopRight.m_x <= selfTopRight.m_x);
    bool yCollision = (selfBotLeft.m_y <= actorBotLeft.m_y && actorBotLeft.m_y <= selfTopRight.m_y) 
                        || (selfBotLeft.m_y <= actorTopRight.m_y && actorTopRight.m_y <= selfTopRight.m_y);
    return xCollision && yCollision;
}

void Actor::mUpdate(float delta_t)
{
    m_position = m_position + (m_speed * delta_t);
}

Vector2D Actor::mGetPosition()
{
    return m_position;
}