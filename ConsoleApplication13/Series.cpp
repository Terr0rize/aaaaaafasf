#include "pch.h"
#include "Series.h"
using namespace std;

void Series::seriesvector()
{
	int owo, uwu, popo;
	std::vector<Body *> bodies;
	Body *b;
	cout << "¬ведите поочерЄдно длины ребЄр дл€ параллелепипеда" << endl;
	cin >> owo;
	cin >> uwu;
	cin >> popo;
	b = new Parallelepiped(owo, uwu, popo);
	bodies.push_back(b);

	cout << "¬ведите радиус шара дл€ нахождени€ площади и объЄма" << endl;
	cin >> owo;
	b = new Ball(owo);
	bodies.push_back(b);

	cout << "¬ведите поочерЄдно радиус окружности, длину ребра и высоту конуса" << endl;
	cin >> owo;
	cin >> uwu;
	cin >> popo;
	b = new Cone(owo, uwu, popo);
	bodies.push_back(b);
}

