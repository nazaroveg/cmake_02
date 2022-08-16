#pragma once
#include "multi_class_Figure.h"


class Quadrilateral : public Figure
{
public:
	
	Quadrilateral(const int A, int B, int C, int D, int a, int b, int c, int d, std::string _name);

	

	void print_info() const override;

protected:
	int corner_a = 0, corner_b = 0, corner_c = 0, corner_d = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0, Length_d = 0;
};




