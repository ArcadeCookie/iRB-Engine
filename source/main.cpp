#include "libraries/GameObject/Vector2D.h"
#include "libraries/GameObject/Vector2D_operators.h"
#include "libraries/GameObject/BoundingBox.h"
#include "libraries/GameObject/Actor.h"
#include "libraries/Time/Clock.h"
#include <iostream>

int main()
{
    Clock c = Clock();

    Clock t = Clock();
    Actor actor = Actor({0, 0}, {1, 2}, {1, 1});

    for (int i = 0; i < 100; i++)
    {
        float delta_t = t.mElapsedTimeNewPoint();
        actor.mUpdate(delta_t);
        std::cout << "actor pos: " << actor.mGetPosition() << std::endl;
    }

    std::cout << "Total time: " << c.mElapsedTime() << std::endl;

    return 1;
}
