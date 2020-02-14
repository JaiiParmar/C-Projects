#pragma once
class MegaString
{

private:
	char* p;
	size_t len;

public:


	MegaString(); 
	MegaString(const char* s, size_t l);

	MegaString(const MegaString& sc);
	~MegaString();
	MegaString& operator =(const MegaString& sc);
	
	size_t getLen();
	
	void display();

	//Operators
	
	friend bool operator ==(const MegaString&, const MegaString&);
	friend bool operator !=(const MegaString&, const MegaString&);
	friend bool operator <(const MegaString&, const MegaString&);
	friend bool operator >(const MegaString&, const MegaString&);
	
	// if I put & here, it is an error.
	MegaString operator +(const MegaString&);
	void operator +=(const MegaString&);

private:
	void Allocate(const MegaString& sc);

};

