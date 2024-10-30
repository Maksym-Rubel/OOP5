#include "Remote.h"
#include "TV.h" 
void Remote::chooseTV(TV* tv)
{
	this->tv = tv;
}
Remote::Remote(TV* tv)
{
	chooseTV(tv);
}

void Remote::power()
{
	tv->power();
}

void Remote::operator+() const
{
	tv->upVolume();
}

void Remote::operator-() const
{
	tv->downVolume();
}

void Remote::operator--() const
{
	tv->prevChannel();
}
void Remote::operator++() const
{
	tv->nextChannel();
}

void Remote::goChannel(size_t channel)
{
	
	tv->goChannel1(channel);
	
}