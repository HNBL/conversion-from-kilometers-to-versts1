#include <iostream>
#define _USE_MATH_DEFINES  // êîìàíäà íà ñëó÷àé èñïîëüçîâàíèÿ ÷èñëà ÏÈ
using namespace std;   


int main()
{
	setlocale(LC_ALL, "Russian"); // перевод русский кириллицы
	int x;
	cout << "ввидите киллометры:  ";
	cin >> x;


	float ver = 1.0668;
	float ver1;
	ver1 = x * ver;

	 
	std::cout << "Верст:   " << ver1 << endl;
}


