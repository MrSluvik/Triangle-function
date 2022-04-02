// Написати клас Triangle (трикутник), що містить цілочисельні поля координати вершин трикутника x1, y1, x2, y2, x3, y3.
//Реалізувати конструктори : по замовчуванню, що обнулює координати вершин трикутника; з параметрами, що отримує координати вершин трикутника та ініціаліхує їх.
//Реалізувати методи : void Out() - виводить координати трикутника через пропуск; double area() - повертає площу трикутника;
//double perimeter() - повертає периметр трикутника; double inscribedRadius() - повертає радіус вписаного кола; double describedRadius() - повертає радіус описаного кола;
#include <iostream>
#include<Windows.h>
#include <cmath>
using namespace std;
class Triangle
{
private:  int x1, x2, x3, y1, y2, y3; 
 
public:	double AB, BC, CA ,p, P, S, r, R ;//додаткові змінні для знаходження сторін трикутника та  півпериметру,периметру,площі,радіуса вписаного та описаного кола,
	Triangle() {//конструктор: по замовчуванню, що обнулює координати вершин трикутника; А також обнуляє додаткові змінні
		x1 = 0;	x2 = 0; x3 = 0; y1 = 0;	y2 = 0;	y3 = 0;
		p = 0; P = 0;S = 0; r = 0; R = 0; AB = 0; BC = 0; CA = 0;
	};
	Triangle(int x1, int x2, int x3, int y1, int y2, int y3) {//конструктор: з параметрами, що отримує координати вершин трикутника та ініціаліхує їх.
		this->x1 = x1;
		this->x2 = x2;
		this->x3 = x3;
		this->y1 = y1;
		this->y2 = y2;
		this->y3 = y3;
	};
	void Out() {
		cout << "Координати трикутника " << "X1 = " << x1<<" X2 = " << x2<<" X3 =" << x3<<" Y1 = " << y1<< " Y2 = " << y2<<" Y3 = " << y3 << endl;// методи: void Out() - виводить координати трикутника через пропуск;
	}
	double perimeter() {
		AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));//знаходимо по координатах
		BC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));//довжину сторін
		CA = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));//трикутника
		P = AB + BC + CA;//знаходимо периметр даного трикутника
		return P;
	}
	double area() {//double area() - повертає площу трикутника;
		p = P / 2;//півпериметр потрібний для знаходження площі трикутника за трьома сторонами
		S = sqrt(p * ((p- AB) * (p - BC) * (p - CA)));//знаходим площу трикутника
		return S;
	}
	double inscribedRadius() {//double inscribedRadius() - повертає радіус вписаного кола;
		r = S / p; //знаходим радіус вписаного кола 
		return r;
	}
	double describedRadius() {//double describedRadius() - повертає радіус описаного кола;
		R = (AB*BC*CA)/(S*4);//знаходим радіус описаного кола 
		return R;
	}
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle First(2, 4, 3, 0, 2, 7);
	First.Out();
	cout<<"Периметр трикутника = "<< First.perimeter() <<endl;
	cout << "Площа  трикутника = " << First.area() << endl;
	cout << "Радіус вписаного кола у трикутник = " << First.inscribedRadius() << endl;
	cout << "Радіус описаного кола навколо  трикутника = " << First.describedRadius() << endl;	
}


