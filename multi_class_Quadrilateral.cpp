

#include "multi_class_Quadrilateral.h"
#include <iostream>


Quadrilateral::Quadrilateral(const int A, int B, int C, int D, int a, int b, int c, int d, std::string name) :
	Figure(4, name), corner_a(A), corner_b(B), corner_c(C), corner_d(D),
	Length_a(a), Length_b(b), Length_c(c), Length_d(d) {}
	



	void Quadrilateral:: print_info() const
	{
		setlocale(LC_ALL, "RUS");
	
		Figure::print_info();
		std::cout << "Стороны: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << "d=" << Length_d << std::endl;
		std::cout << "Углы: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << " " << "D=" << corner_d << "\n" << std::endl;
	}




	
