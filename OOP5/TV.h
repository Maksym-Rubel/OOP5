#pragma once


class Remote;

class TV {
public:
	TV() = default;
	TV(size_t channel = 1, size_t volume = 1, bool status = false, size_t maxChannel = 100, size_t maxVolume = 100);
	friend class Remote;
	void upVolume();
	void downVolume();
	void power();
	void printInfo();
	void nextChannel();
	void prevChannel();
	void goChannel1(size_t channel);




	
private:
	bool OnOf = false;
	size_t volume = 0;
	size_t chanel = 0;
	const size_t kikchanel = 16;
	const size_t MaxVolume = 10;
	
};