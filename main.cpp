#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	void(*minFunction)(int, int[]);
	int c;
	cout << "Enter array size ";
	cin >> c;
	int *arr = new int[c];
	cout << "Enter array" << endl;
	for (int i = 0; i < c; i++)
	{
		cin >> arr[i];
	}
	minFunction = Function(c, arr);
	minFunction(c, arr);
	system("pause");
}