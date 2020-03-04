#include "pch.h"
#include <iostream>
#include "Parallelepiped.h"
#include "Body.h"
#include "Ball.h"
#include "Cone.h"
#include <vector>
#include "Series.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int  e;
	Series anime;
	std::vector<Body *> bodies;
	auto it = bodies.begin();
	
	do {
		system("pause");
		system("cls");
		cout << "=> Введите номер выбора: " << endl;
		cout << "[1]. Ввести данные о фигурах.  " << endl;
		cout << "[2]. Найти объем и площадь прямоугольного параллелепипеда.  " << endl;
		cout << "[3]. Найти объем и площадь шара." << endl;
		cout << "[4]. Найти объем и площадь конуса." << endl;
		cout << "[5]. Вывести все раннее расчитанные данные о фигурах." << endl;
		cout << "[6]. Выход из программы." << endl;
		cin >> e;
		switch (e)
		{
		case 1:
		{
			/*cout << "Введите поочерёдно длины ребёр для параллелепипеда" << endl;
			cin >> owo;
			cin >> uwu;
			cin >> popo;
			b = new Parallelepiped(owo, uwu, popo);
			bodies.push_back(b);

			cout << "Введите радиус шара для нахождения площади и объёма" << endl;
			cin >> owo;
			b = new Ball(owo);
			bodies.push_back(b);

			cout << "Введите поочерёдно радиус окружности, длину ребра и высоту конуса" << endl;
			cin >> owo;
			cin >> uwu;
			cin >> popo;
			b = new Cone(owo, uwu, popo);
			bodies.push_back(b);*/
			anime.seriesvector();
		} break;
		case 2:
		{
		
			anime.bodies[0]->Print(cout) << ", S = " << anime.bodies[0]->SurfaceArea() << ", V = " << anime.bodies[0]->Volume() << endl;
		
		}; break;
		case 3:
		{

			anime.bodies[1]->Print(cout) << ", S = " << anime.bodies[1]->SurfaceArea() << ", V = " << anime.bodies[1]->Volume() << endl;
			
		}; break;
		case 4:
		{
			anime.bodies[2]->Print(cout) << ", S = " << anime.bodies[2]->SurfaceArea() << ", V = " << anime.bodies[2]->Volume() << endl;

		}break;
		/*case 5: {
			it = bodies.begin();
			while (it != bodies.end())
			{
				(*it)->Print(std::cout) << ", S = " << (*it)->SurfaceArea() << ", V = " << (*it)->Volume() << std::endl;
				it++;
			}
			break;
		default:
			it = bodies.begin();
			while (it != bodies.end())
			{
				delete *it;
				it++;
			}
			bodies.clear();
			break;
		}; break;*/
		case 6: {
			return 0;

		}; break;
		}
	} while (e != 7);

	//	Series series(100);
	//
	//	series.Add(new Ball(3));
	//	series.Add(new Parallelepiped(1,2,2));
	//	series.Add(new Cone(2,3,3));
	//
	//
	////	for (int i=0; i < series.Size(); ++i)
	//		std::cout << series[i]->SurfaceArea() << std::endl;

	return 0;
}