
#include "stdafx.h"
#include <iostream>   
#include <memory> 

class Box 
{
	private:
		double length;
		double width;
		double height;

	public:
		Box(double lv = 1.0, double wv = 1.0, double hv = 1.0);
		double volume();
		friend double surfaceArea(const Box &aBox);
};

Box::Box(double lv, double wv, double hv) : length(lv), width(wv), height(hv) 
{
	std::cout << "Box constructor called." << std::endl;
}

double Box::volume()
{
	return (length * width * height);
}

using namespace std;

int main()
{
	Box box1{ 2.2, 1.1, 0.5 };
	Box box2;
	auto pBox3 = make_shared<Box>(15.0, 20.0, 8.0);
	cout << "Volume of box1 = " << box1.volume() << endl;
	cout << "Surface area of box1 = " << surfaceArea(box1) << endl;
	cout << "Volume of box2 = " << box2.volume() << std::endl;
	cout << "Surface area of box2 = " << surfaceArea(box2) << endl;
	cout << "Volume of box3 = " << pBox3->volume() << endl;
	cout << "Surface area of box3 = " << surfaceArea(*pBox3) << endl;
    return (0);
}

double surfaceArea(const Box &aBox)
{
	return 2.0 * (aBox.length * aBox.width 
				+ aBox.length * aBox.height 
				+ aBox.height*aBox.width);
}