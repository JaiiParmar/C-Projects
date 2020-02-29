#pragma once
#include <string>

class Venue
{

private:

	std::string venName;
	std::string venAddress;

public:

	Venue();
	Venue(std::string, std::string);
	
	std::string getVenName() const;
	std::string getVenAddress() const;

	void setVenName(std::string);
	void setVenAddress(std::string);

};

