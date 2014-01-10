#ifndef _NEWS_SERVER_H_
#define _NEWS_SERVER_H_

#include "NewsListenerInterface.h"
#include <list>

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

#endif
