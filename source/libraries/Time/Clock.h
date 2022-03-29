#pragma once
#include <chrono>

class Clock
{
private:
    std::chrono::system_clock::time_point m_start;

public:
    Clock();

    ~Clock();

    void mNewTimePoint();

    float mElapsedTime() const;

    float mElapsedTimeNewPoint();
};
