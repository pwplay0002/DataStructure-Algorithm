#include "Timer.h"

void Timer::Start()
{
	IsStart = true;
	StartTime = chrono::system_clock::now();
}

void Timer::End()
{
	if (IsStart) EndTime = chrono::system_clock::now();
	else  cout << "Have to use Start Func first." << endl;
}

double Timer::GetDeltaTime()
{
	DeltaTime = (EndTime - StartTime);
	return DeltaTime.count();
}