#include "ConcreteNewsListener.h"

ConcreteNewsListener::ConcreteNewsListener(void)
{
}

ConcreteNewsListener::~ConcreteNewsListener(void)
{
}

void ConcreteNewsListener::update(const std::string& data)
{
	setData(data);
}
