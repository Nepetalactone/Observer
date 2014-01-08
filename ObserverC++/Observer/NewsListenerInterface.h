#pragma once
#include <string>
class NewsListenerInterface
{
	public:
		virtual void update(std::string newData);
};

