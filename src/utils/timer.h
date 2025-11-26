#ifndef TIMER_H
#define TIMER_H

#include <chrono>
using namespace std;
using namespace std::chrono;

class Timer {
    high_resolution_clock::time_point start_time;

public:
    void start() {
        start_time = high_resolution_clock::now();
    }

    double stop() {
        auto end_time = high_resolution_clock::now();
        duration<double, milli> elapsed = end_time - start_time;
        return elapsed.count(); 
    }
};

#endif