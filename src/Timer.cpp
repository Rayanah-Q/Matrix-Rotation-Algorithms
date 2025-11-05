#include "Timer.h"
Timer::Timer() {}
Timer::~Timer() {}
void Timer::start()
{
    startTime = chrono::high_resolution_clock::now();
}
void Timer::stop()
{
    endTime = chrono::high_resolution_clock::now();
}

void Timer::printDuration()
{  
    chrono::duration<double> duration = endTime - startTime;
    cout << "Duration time: " << duration.count() << " seconds" << endl;
}