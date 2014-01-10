#include "stdafx.h"
#include "NewsServer.h"
#include "NewsListenerInterface.h"
#include <string>

std::list<NewsListenerInterface*> observerList;

NewsServer::NewsServer(void)
{
}


NewsServer::~NewsServer(void)
{
}

void attach (NewsListenerInterface* newObserver)
{
	observerList.push_back(newObserver);
}

void detach (NewsListenerInterface* observerToDetach)
{
	observerList.remove(observerToDetach);
}

void propagateNews (std::string news)
{
	std::list<NewsListenerInterface*>::iterator listIterator;

	for (listIterator = observerList.begin(); listIterator != observerList.end(); listIterator++)
	{
		NewsListenerInterface* newsListener = *listIterator;
		newsListener->update( news );
	}
}
