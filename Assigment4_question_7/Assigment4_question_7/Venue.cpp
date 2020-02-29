#include "Venue.h"
#include <string>

Venue::Venue() = default;

Venue::Venue(std::string venName, std::string venAddress) {
	this->venAddress = venAddress;
	this->venName = venName;
}

std::string Venue::getVenName() const { return venName; }
std::string Venue::getVenAddress() const { return venAddress; }

void Venue::setVenAddress(std::string venAddress) {
	this->venAddress = venAddress;
}
void Venue::setVenName(std::string venName) {
	this->venName = venName;

