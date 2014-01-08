#include "stdafx.h"
#include "ConcreteNewsListener.h"


class ConcreteNewsListener : public NewsListenerInterface
{

	private : std::string data;

	ConcreteNewsListener::ConcreteNewsListener(void)
	{
	}

	ConcreteNewsListener::~ConcreteNewsListener(void)
	{
	}

	void update(std::string data)
	{
		setData(data);
	}

	std::string getData()
	{
		return data;
	}

	private : void setData(std::string newData)
	{
		data = newData;
	}

};
