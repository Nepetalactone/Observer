#pragma once
#include "NewsListenerInterface.h"
#include <list>
#include <string>

class NewsServer
{
private:
	std::list<NewsListenerInterface*> observerList;

public:
	NewsServer(void);
	~NewsServer(void);
	void attach(NewsListenerInterface* observer);
	void detach(NewsListenerInterface* observer);
	void propagateNews(std::string news);
};

