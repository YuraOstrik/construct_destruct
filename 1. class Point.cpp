#include<iostream>
using namespace std;

/* 
       Тема: Конструкторы и деструктор. 

		* Необходимость использования. 
        * Проблема- решение! 
*/

class Point
{
//private:
	int x; //  поля класса - РЕАЛИЗАЦИЯ 
	int y;
public://  ИНТЕРФЕЙС класса
	void Input()
	{
		cin >> x >> y;
	}
	void Show()
	{
		cout << x << "\t" << y << endl;
	}
	Point Sum(Point & b)
	{
		Point rez;
		rez.x = x + b.x; // a.x+b.x
		rez.y = y + b.y;// a.y + b.y
		return rez;
	}
};

int main()
{
	Point a;
	a.Input();
	a.Show();

	Point b;
	b.Input();
	b.Show();

	Point c = a.Sum(b);
	c.Show();





	system("pause");
	return 0;
}