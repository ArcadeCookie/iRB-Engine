#include "Model.h"
#include <tgmath.h>
#include <math.h>

Model::Model()
{
    m_vertexes[0] = 0.0f;
    m_vertexes[1] = 0.2f;
    m_vertexes[2] = 0.0f;
    m_vertexes[3] = -0.05f;
    m_vertexes[4] = 0.0f;
    m_vertexes[5] = 0.0f;
    m_vertexes[6] = 0.05f;
    m_vertexes[7] = 0.0f;
    m_vertexes[8] = 0.0f;
    m_indexes[0] = 0;
    m_indexes[1] = 1;
    m_indexes[2] = 2;
    m_position = {0,0};
    m_direction = {0,0.1};
    m_angle_factor = 1;
}

Model::Model(float x, float y, float speed, float angle_factor)
{
    m_vertexes[0] = 0.0f + x;
    m_vertexes[1] = 0.2f + y;
    m_vertexes[2] = 0.0f;
    m_vertexes[3] = -0.05f + x;
    m_vertexes[4] = 0.0f + y;
    m_vertexes[5] = 0.0f;
    m_vertexes[6] = 0.05f + x;
    m_vertexes[7] = 0.0f + y;
    m_vertexes[8] = 0.0f;
    m_indexes[0] = 0;
    m_indexes[1] = 1;
    m_indexes[2] = 2;
    m_position = {x,y};
    m_direction = {0,speed};
    m_angle_factor = angle_factor;
}

Model::~Model(){}

void Model::mUpdate(float delta_t)
{
    float factor = delta_t / 300;

    m_vertexes[0] += factor * m_direction.m_x;
    m_vertexes[1] += factor * m_direction.m_y;
    m_vertexes[3] += factor * m_direction.m_x;
    m_vertexes[4] += factor * m_direction.m_y;
    m_vertexes[6] += factor * m_direction.m_x;
    m_vertexes[7] += factor * m_direction.m_y;
    m_position = m_position + factor * m_direction;
    if (magnitude(m_position + m_direction) > magnitude(m_position))
    {
        if (magnitude(m_position + rotate(m_direction, m_angle + 10)) > magnitude(m_position + rotate(m_direction, m_angle - 10)))
        {
            m_angle -= 10 * factor * m_angle_factor;
        }
        else
        {
            m_angle += 10 * factor * m_angle_factor;
        }
        m_direction = rotate(m_direction, m_angle);
    }
}

float * Model::mGetVert()
{
    return m_vertexes;
}

float * Model::mGetIndex() 
{
    return m_indexes;
}