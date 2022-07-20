﻿#pragma once
#include "multi_class_Quadrilateral.h"


class Parallelogram : public Quadrilateral
{
public:

	Parallelogram(const int A, int B, int a, int b, std::string name = "Параллелограмм:") : Quadrilateral(A, B, A, B, a, b, a, b, name) {}
};
