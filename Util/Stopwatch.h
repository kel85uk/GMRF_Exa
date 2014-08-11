#ifndef EXASTENCILS_UTIL_STOPWATCH_H
#define EXASTENCILS_UTIL_STOPWATCH_H

#include <chrono>

class StopWatch
{
public:
	StopWatch ()
		: lastTime(std::chrono::high_resolution_clock::now())
	{}

	~StopWatch ()
	{}

	void	reset ()
	{ lastTime = std::chrono::high_resolution_clock::now(); }

	float	getTimeInMilliSec () const
	{
		std::chrono::nanoseconds timeStep = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - lastTime);
		return (float)(timeStep.count() / 1e6);
	}

	float	getTimeInSec () const
	{
		std::chrono::nanoseconds timeStep = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - lastTime);
		return (float)(timeStep.count() / 1e9);
	}

	float	getTimeInSecAndReset ()
	{
		float timeStep = getTimeInSec();
		reset();
		return timeStep;
	}

	float	getTimeInMilliSecAndReset ()
	{
		float timeStep = getTimeInMilliSec();
		reset();
		return timeStep;
	}

protected:
	std::chrono::high_resolution_clock::time_point	lastTime;		///< stores the initial point of time
};

#endif
