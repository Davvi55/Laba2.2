#include <iostream>
#include "Header.h"

using namespace std;

void Vozrastanie(int size, int *arr)
{
	int b, j, k;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				k = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = k;

			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void Ubivanie(int size, int *arr)
{
	int b, j, k;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
	
	void reverse(int s, int mas[])
	{
		int swap;
		for (int i = 0; i < s / 2; i++)
		{
			swap = mas[i];
			mas[i] = mas[s - i - 1];
			mas[s - 1 - i] = swap;
		}

	}

	int sum(int s, int *arr)
	{

		int suma = 0;
		for (int i = 0; i < s; i++)
		{
			suma += arr[i];
		}
		return suma;
	}

	void(*Function(int s, int *arr))(int, int*)
	{
		void(*minFunction)(int, int[]);
		int suma = sum(s, arr);
		if (suma == arr[0]) minFunction = reverse;
		if (suma > arr[0]) minFunction = Ubivanie;
		else minFunction = Vozrastanie;
		return minFunction;
	}
