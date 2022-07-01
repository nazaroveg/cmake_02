#pragma once
#include <iostream>
#include <string>


class figure
{
public:
	figure(int _sides_count = 0, std::string _name = "������") : sides_count(_sides_count), name(_name) { };
	void print_info() const;
	

protected:
	std::string name ;
	int sides_count ;
};