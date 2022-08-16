
#include "multi_class_Figure.h"
#include <iostream>

Figure::Figure (const int sides_count = 0, std::string name = "Фигура") : sides_count(sides_count), name(name) 
{
	this -> name = name;
	this->sides_count = sides_count;
};

void  Figure::print_info() const

{

	std::cout << name << std::endl;
	std::cout << "число сторон: " << sides_count << std::endl;

}




	

