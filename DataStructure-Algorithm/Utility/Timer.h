#pragma once
#include <iostream>
#include <chrono>
using namespace std;

class Timer
{
public:
	Timer() : IsStart(false) {}
	Timer(const Timer& ref) {}
	~Timer() {}

	void Start();
	void End();
	double GetDeltaTime();

private:
	std::chrono::system_clock::time_point StartTime, EndTime;
	std::chrono::duration<double> DeltaTime;
	bool IsStart;
};