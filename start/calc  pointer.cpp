// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;

#define SIZE 10


void calc(int* a, int* b, char* op, float* res)
{
	if (*op == '+')
	{
		*res = float(*a + *b);
	}
	else if (*op == '-')
	{
		*res = float(*a - *b);
	}
	else if (*op == '/')
	{
		*res = float(*a / *b);
	}
	else if (*op == '*')
	{
		*res = float(*a * *b);
	}
	

	
}
int main()
{

	

	srand(time(NULL));
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - Calculator\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{
		case '1':
		{
			cout << "1 - Calculator\n";

			int a1;
			int b1;
			float res1;
			char op1;
			cout << " Enter first digit:\n";
			cin >> a1;
			cout << "Make your choice: |+|-|/|*|\n";
			cin >> op1;
			cout << " Enter second digit:\n";
			cin >> b1;
			calc(&a1, &b1, &op1, &res1);
			cout << " Result:\n" << res1 << endl;
		
		}break;


		case '2':
		{
			cout << " 2 - Repetitions \n";





		}break;
		case '3':
		{
			cout << "3 - Sort Massive Sum\n";

		}break;
		case '4':
		{
			cout << "4 - Sort Massive Sum\n";
			int arr[SIZE];
			int* pArr{};
			for (int i = 0; i < SIZE; i++)
			{
				
				arr[i] = rand() % 10;
				pArr = arr;
				cout << arr[i] << " \t";
				
			}
			cout << " arr[0]\t = " << *pArr << endl;

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
