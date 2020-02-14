#ifndef BOX_H	

#define BOX_H

class Box
{
private :

	double h; 
	double b;
	double w;
	static int count;

public:
	
	Box();

	Box(double h, double w, double b); 
	
	Box(double s);	// constructor deligation.
	
	Box(const Box& b); // copy constructor 
	
	double volume()const ; // member function, can not change state of the obj.

	~Box(); //destructor

	void setH(const double h);
	void setB(const double b);
	void setW(const double w);

	double getH();
	double getB();
	double getW();
};

#endif //!BOX_H

