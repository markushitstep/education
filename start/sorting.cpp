﻿// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;

#define SIZE 10

template <typename T>
inline T retRand(T min, T max, int order) { return (T)(rand() % (int)(max - min) * order) / order + min; }
template <typename T>
void fillArr(T arr[], int size, T min, T max, int order);
template <typename T>
void printArr(T arr[], int size);



int main()
{
	srand(time(NULL));
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - Decrease\n";
		cout << "2 - Increase \n";
		cout << "3 - Increase \n";
		cout << "4 - Increase \n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{



		case '1':
		{
			cout << "1 - Decrease\n";
		



		}break;


		case '2':
		{
			cout << " 2 - Increase \n";

			int MtxInt[SIZE]{};
			int min1 = 0;
			int max1 = 10;
			fillArr(MtxInt, SIZE, min1, max1, 1);
			cout << " Integer array: \n";
			printArr(MtxInt, SIZE);
			
			char  MtxChar[SIZE]{};
			char  min2 = 'a';
			char  max2 = 'w';
			fillArr(MtxChar, SIZE, min2, max2, 1);
			cout << " Char array: \n";
			printArr(MtxChar, SIZE);
			


		}break;
		case '3':
		{
			

		}break;
		case '4':
		{
	
		}break;

		return 0;
		default:
		{
			cout << "error\n";
		}break;
		}
		system("pause");
	}
	cout << "Bye\n";
}
template <typename T>
void fillArr(T arr[], int size, T min, T max, int order)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = retRand(min, max, order);
	}
}
template <typename T>
void printArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}





// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
