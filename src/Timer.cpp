#include "Timer.h"
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
    auto duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime);
    cout << "Duration: " << duration.count() << " microseconds" << endl;
}