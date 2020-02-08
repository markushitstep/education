// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;


int concPerfNumb(int min=0 , int max =9000);

inline int calcSqrLinKv(int a, int b, int x) { return a * x + b; }
inline int calcSqrLinKv(int a, int b, int c, int x){	return a *x*x  + b * x + c;}

	
int main()
{
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 -Return numb\n";
		cout << "2 - enterNumber\n";
		cout << "3 - Find NOD\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{



		case '1':
		{
			cout << "1 -Return numb\n";
			cout  <<  concPerfNumb() << endl;
			
			
		}break;


		case '2':
		{
			cout << "2 -  enterNumber\n";
			cout << calcSqrLinKv(2, 3, 4) << endl;
			cout << calcSqrLinKv(2, 3, 4, 5) << endl;
		}break;
		case '3':
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

int concPerfNumb(int min, int max )
{
	
	for (int i = min; i < max; i++)
	{
		 int result = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
				result += j;
		}	
		if (result == i&& result)
			cout << result << "\t" ;
			
	}
	return 0 ;
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
