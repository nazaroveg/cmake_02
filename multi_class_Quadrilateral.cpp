#pragma once
#include "multi_class_Header.h"

class Quadrilateral; //: public figure  //��������������  ��� !=

	


	void Quadrilateral:: print_info() const
	{
		setlocale(LC_ALL, "RUS");
		std::cout << name << std::endl;
		std::cout << "����� ������: " << sides_count << std::endl;
		std::cout << "�������: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << "d=" << Length_d << std::endl;
		std::cout << "����: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << " " << "D=" << corner_d << "\n" << std::endl;
	}




	
