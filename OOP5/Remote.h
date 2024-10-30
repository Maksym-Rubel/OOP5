#pragma once

class TV;
class Remote
{
	TV* tv = nullptr;
public:
	void chooseTV(TV* tv);
	Remote(TV* tv = nullptr);
	void power();
	void operator +() const;
	void operator -() const;
	void operator --() const;
	void operator ++() const;
	void goChannel(size_t channel);




};