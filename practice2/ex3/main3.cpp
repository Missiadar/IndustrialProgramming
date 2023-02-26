#include <iostream>
#include <vector>
#include <string>
#include "Figure.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	vector<Figure> mas;
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите координаты  x1,x2,x3,x4,y1,y2,y3,y4 четырехугольника" << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		mas.push_back(Figure(x1, x2, x3, x4, y1, y2, y3, y4));
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Параметры четырехугольника № " << i + 1 << " : "; mas[i].show();
		cout << "Четырехугольник №" << i + 1 << "прямоугольник : " << mas[i].is_prug() << endl;
		cout << "Четырехугольник №" << i + 1 << "квадрат : " << mas[i].is_square() << endl;
		cout << "Четырехугольник №" << i + 1 << "ромб : " << mas[i].is_romb() << endl;
		cout << "Четырехугольник №" << i + 1 << "можно вписать в окружность : " << mas[i].is_in_circle() << endl;
		cout << "Четырехугольник №" << i + 1 << "нельзя вписать в окружность : " << mas[i].is_out_circle() << endl;
	}
}
