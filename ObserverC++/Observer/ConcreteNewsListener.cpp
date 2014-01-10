#include "stdafx.h"
#include "ConcreteNewsListener.h"



std::string data;

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

void setData(std::string newData)
{
	data = newData;
}

