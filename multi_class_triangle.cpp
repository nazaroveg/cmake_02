#pragma once
#include "multi_class_Header.h"

class triangle; //: public figure //�����������




void triangle::print_info() const
	{
	setlocale(LC_ALL, "RUS");
		std::cout << name << std::endl;
		std::cout << "����� ������: " << sides_count << std::endl;
		std::cout << "�������: " << "a=" << Length_a << " " << "b=" << Length_b << " " << "c=" << Length_c << " " << std::endl;
		std::cout << "����: " << "A=" << corner_a << " " << "B=" << corner_b << " " << "C=" << corner_c << "\n" << std::endl;
	}





	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;

