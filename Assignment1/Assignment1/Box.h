#ifndef BOX_H
#define BOX_H

class Box
{
private:
	double h; 
	double w;
	double l;
	unsigned int color;
public:

	Box(double, double, double);
	
	void setH(double);
	void setW(double);
	void setL(double);
	void setColor(unsigned int);

	double volume() const;

	double surfaceArea() const;

	// ~Box() {}
	
};
#endif // !BOX_H

