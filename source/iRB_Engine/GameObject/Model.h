#include "Vector2D.h"
#include "Vector2D_operators.h"

class Model
{
private:
    float m_vertexes[9];
    float m_indexes[3];
    Vector2D m_direction;
    Vector2D m_position;
    float m_angle = 0;
    float m_angle_factor;
public:
    Model();
    Model(float x, float y, float speed, float angle_factor);
    ~Model();
    float * mGetVert();
    float * mGetIndex();
    void mUpdate(float delta_t);
};

