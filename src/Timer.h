#include <iostream>
#include <chrono>
using namespace std;
class Timer {
private:
    chrono::high_resolution_clock::time_point startTime;
    chrono::high_resolution_clock::time_point endTime;
public:
    Timer();
    ~Timer();
    void start();
    void stop();
    void printDuration();
};