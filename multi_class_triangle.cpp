﻿

#include "multi_class_triangle.h"



class Triangle;




void Triangle::print_info() const
	{
	
		std::cout << name << std::endl;
		std::cout << "число сторон: " << sides_count << std::endl;
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << "\n" << std::endl;
	}





	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;

