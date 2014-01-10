// Observer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "NewsServer.h"
#include "ConcreteNewsListener.h"
#include "stdio.h"

int main(int argc, char** argv)
{
	NewsServer* server = new NewsServer();
	ConcreteNewsListener* firstListener = new ConcreteNewsListener();
	server->attach(firstListener);
	ConcreteNewsListener* secondListener = new ConcreteNewsListener();
	server->attach(secondListener);

	server->propagateNews("First News");

	printf("%s\n", firstListener->getData().c_str());
	printf("%s\n", secondListener->getData().c_str());

	server->detach(secondListener);

	server->propagateNews("Second News");

	printf("%s\n", firstListener->getData().c_str());
	printf("%s\n", secondListener->getData().c_str());
}
