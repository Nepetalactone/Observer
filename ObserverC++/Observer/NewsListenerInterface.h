#ifndef _NEWSLISTENER_IFACE_
#define _NEWSLISTENER_IFACE_

#include <string>

class NewsListenerInterface
{
	public:
		virtual ~NewsListenerInterface(){};

		virtual void update(const std::string& newData) = 0;
};

#endif