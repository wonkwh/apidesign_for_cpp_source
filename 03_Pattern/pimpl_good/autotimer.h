
#ifndef AUTOTIMER_H
#define AUTOTIMER_H

#include <string>

namespace apibook {

///
/// An object that reports how long it was alive for when it
/// is destroyed.
///
class AutoTimer
{
public:
	/// Create a new timer object with a human-readable name
	explicit AutoTimer(const std::string &name);
	/// On destruction, the timer reports how long it was alive
	~AutoTimer();

private:
	// Make this object be noncopyable because it holds a pointer
	AutoTimer(const AutoTimer &);
	const AutoTimer &operator =(const AutoTimer &);

	class Impl;
	Impl *mImpl;
};

}

#endif
