#include "Clock.h"

Clock::Clock()
{
    m_start = std::chrono::system_clock::now();
}

Clock::~Clock() {}

void Clock::mNewTimePoint()
{
    m_start = std::chrono::system_clock::now();
}

float Clock::mElapsedTime() const
{
    std::chrono::duration<float, std::milli> elapsed_time = std::chrono::system_clock::now() - m_start;
    return elapsed_time.count();
}

float Clock::mElapsedTimeNewPoint()
{
    std::chrono::system_clock::time_point new_time_point = std::chrono::system_clock::now();
    std::chrono::duration<float, std::milli> elapsed_time = new_time_point - m_start;
    m_start = new_time_point;
    return elapsed_time.count();
}