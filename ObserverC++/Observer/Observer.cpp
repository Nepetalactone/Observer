// Observer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "ConcreteNewsListener.cpp"
#include "NewsServer.cpp"
#include "NewsListenerInterface.cpp"
#include "stdafx.h"
#include <list>


int _tmain(int argc, _TCHAR* argv[])
{
	NewsServer* server;
	ConcreteNewsListener firstListener = new ConcreteNewsListener();
	server->attach(firstListener);
	ConcreteNewsListener secondListener = new ConcreteNewsListener();
	server->attach(secondListener);

	server->propagateNews("First News");

}


