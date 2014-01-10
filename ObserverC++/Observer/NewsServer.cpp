#include "NewsServer.h"

NewsServer::NewsServer(void)
{
}


NewsServer::~NewsServer(void)
{
}

void NewsServer::attach (NewsListenerInterface* newObserver)
{
	observerList.push_back(newObserver);
}

void NewsServer::detach (NewsListenerInterface* observerToDetach)
{
	observerList.remove(observerToDetach);
}

void NewsServer::propagateNews (std::string news)
{
	std::list<NewsListenerInterface*>::iterator listIterator;

	for (listIterator = observerList.begin(); listIterator != observerList.end(); listIterator++)
	{
		NewsListenerInterface* newsListener = *listIterator;
		newsListener->update( news );
	}
}
