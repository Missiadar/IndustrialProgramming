#include <iostream>
#include <cmath>
#include <windows.h>
#include "cone.h"
#include "conoid.h"
using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

////////////////////////////////////////////////////////////////////////////////

    Cone c1(3, 7);              
    Cone c2(1, 2, 3, 5, 10);    

    cout << "Конус 1: " << c1;
    cout << "Площадь поверхности: " << c1.area() << "\n";
    cout << "Объем: " << c1.volume() << "\n";

    cout << "Конус 2: " << c2;
    cout << "Площадь поверхности: " << c2.area() << "\n";
    cout << "Объем: " << c2.volume() << "\n" << "\n" << "------------------------------------------" << "\n" << "\n";

////////////////////////////////////////////////////////////////////////////////

    Conoid conoid1;
    cin >> conoid1;
    cout << conoid1;
    Conoid conoid2{ 1,2,3,4,5,6 };
    cout << "1-ый усеченный конус: " << conoid1 << "2-ой усеченный конус: " << conoid2;
    cout << "Площадь 2-ого усеченного конуса: " << conoid2.area() << endl;
    cout << "Объем 2-ого усеченного конуса: " << conoid2.volume() << endl;
    cout << conoid1.isEqual(conoid2);
    return 0;
}