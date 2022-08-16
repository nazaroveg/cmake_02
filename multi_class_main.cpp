// multi_class_main.cpp : 
//


#include "multi_class_Figure.h"
#include "multi_class_triangle.h"
#include "multi_class_Equilateral_triangle.h"
#include "multi_class_Isosceles_triangle.h"
#include "multi_class_Parallelogram.h"
#include "multi_class_Quadrilateral.h"
#include "multi_class_Rectangle.h"
#include "multi_class_Rhombus.h"
#include "multi_class_Right_triangle.h"
#include "multi_class_Square.h"
#include <clocale>





int main()
{
	
	setlocale(LC_ALL, "RUS");
	
	Triangle tr{ 50,60,70,10,20,30, "Треугольник" };
	Right_triangle Rt{ 50, 60, 10, 20, 30 };
	Isosceles_triangle It{ 50, 60, 10, 20 };
	Equilateral_triangle Et{ 60,30};
	Quadrilateral Ql{ 50,60,70,80,10,20,30,40, "Четырёхугольник" };
	Parallelogram Pl{ 30, 40, 20, 30, "Параллелограмм:" };
	Rectangle Re{ 20,30, "Прямоугольник:" };
	Rhombus Rh{ 30,40,30, "Ромб:" };
	Square Sq{ 20, "Квадрат:" };

	
	tr.print_info();
	Rt.print_info();
	It.print_info();
	Et.print_info();
	Ql.print_info();
	Pl.print_info();
	Re.print_info(); 
	Sq.print_info();
	Rh.print_info();

	return 0;

}


