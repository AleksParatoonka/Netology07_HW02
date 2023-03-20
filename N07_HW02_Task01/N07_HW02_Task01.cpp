// N07_HW02_Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		//y = y;
		m_y = y;
	}
};

void print_point(const point& point_object);// {
//	std::cout << "x:" << point_object.m_x << ", y: " << point_object.m_y << std::endl;
//}

int main()
{

	//int i;
	//for (i = 0; i < 5; i++); {
	

	for (int i = 0; i < 5; i++) {
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}

void print_point(const point& point_object) {
	std::cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << std::endl;
}