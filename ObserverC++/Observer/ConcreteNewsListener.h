#ifndef _CONCRETE_NEWS_LISTENER_
#define _CONCRETE_NEWS_LISTENER_

#include "NewsListenerInterface.h"

class ConcreteNewsListener : public NewsListenerInterface
{
private:
	std::string data;
public:
	ConcreteNewsListener(void);
	virtual ~ConcreteNewsListener(void);
	void update(const std::string& data);
	const std::string& getData() { return data; }
	void setData(const std::string& newData) { data = newData; }
};

#endif