#include "pch.h"
#include <iostream>
#include "Parallelepiped.h"
#include "Body.h"
#include "Ball.h"
#include "Cone.h"
#include <vector>
#pragma once
class Series
{
	
public:
	std::vector<Body *> bodies;
	void seriesvector();
};

