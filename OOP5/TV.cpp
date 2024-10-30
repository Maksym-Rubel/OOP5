#include "TV.h"
#include <iostream>
using namespace std;

TV::TV(size_t chanel, size_t volume, bool OnOf, const size_t MaxVolume, const size_t kikchanel)
	: chanel(chanel), volume(volume), OnOf(OnOf), MaxVolume(MaxVolume), kikchanel(kikchanel)
{
	
}

void TV::upVolume()
{
	if (OnOf == true)
	{
		if (volume + 1 < MaxVolume)
		{
			++volume;
		}
	}
	
}
void TV::downVolume()
{
	if (OnOf == true)
	{
		if (volume - 1 > 0)
		{
			--volume;
		}
	}

}

void TV::power()
{
	if (OnOf == false)
	{
		OnOf = true;
	}
	else {
		OnOf = false;
	}

}

void TV::printInfo()
{
	cout << boolalpha;
	cout << "Power     :: " << OnOf << endl;
	cout << "Volume    :: " << volume << endl;
	cout << "Chanel    :: " << chanel << endl;
	cout << "Kikchanel :: " << kikchanel << endl;
	cout << "MaxVolume :: " << MaxVolume << endl;


}

void TV::nextChannel()
{
	if (OnOf == true)
	{
		if (chanel + 1 < kikchanel)
		{
			++chanel;
		}
	}
	
}

void TV::prevChannel()
{
	if (OnOf == true)
	{
		if (chanel - 1 > 0)
		{
			--chanel;
		}
	}
	
}

void TV::goChannel1(size_t channel)
{
	if (OnOf == true)
	{
		chanel = channel;
	}
}
