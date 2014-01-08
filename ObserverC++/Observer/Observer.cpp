// Observer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "ConcreteNewsListener.h"
#include "NewsServer.h"
#include "NewsListenerInterface.h"
#include "stdafx.h"
#include <list>


int _tmain(int argc, _TCHAR* argv[])
{
	NewsServer* server = new NewsServer();
	ConcreteNewsListener* firstListener = new ConcreteNewsListener();
	server->attach(firstListener);
	ConcreteNewsListener* secondListener = new ConcreteNewsListener();
	server->attach(secondListener);

	server->propagateNews("First News");

}


