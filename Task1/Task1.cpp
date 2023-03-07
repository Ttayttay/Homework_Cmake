#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	SetConsoleCP(1251);

	string name;
	cout << "Введите имя: ";
	cin >> name;

	cout << "Здравствуйте, " << name << "!\n";

	return 0;
}
