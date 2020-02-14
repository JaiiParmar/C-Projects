#pragma once
class Singleton
{
private :  
	static Singleton* obj ;
	Singleton();
public:
	Singleton* getInstance();
};

