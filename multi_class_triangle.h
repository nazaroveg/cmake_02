#pragma once
#include "multi_class_Firure.h"
#include <string>



class Triangle : public Figure
{

public:

	Triangle(const int A, int B, int C, int a, int b, int c, std::string);


	

	void print_info() const override;
protected:
	int corner_a = 0, corner_b = 0, corner_c = 0;
	int Length_a = 0, Length_b = 0, Length_c = 0;
};
