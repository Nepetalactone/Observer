#pragma once
#include <string>
#include "NewsListenerInterface.h"

class ConcreteNewsListener : public NewsListenerInterface
{
private:
	std::string data;
public:
	ConcreteNewsListener(void) : NewsListenerInterface() {} ;
	~ConcreteNewsListener(void);
	void update(std::string data);
	std::string getData();
	void setData(std::string newData);
};

