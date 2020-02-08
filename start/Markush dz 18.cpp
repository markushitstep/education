// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;

float returnsNumbDigit( int a=rand()% 1234+8765 );
float enterNumber(int min = 0, int max = 1000);
float findReturnNumb(int a , int b );
int main()
{
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - Return numb\n";
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
			
			cout << " get numb = "  << returnsNumbDigit() << endl;
			
		}break;


		case '2':
		{
			cout << "2 -  enterNumber\n";
			cout << " Entered number is = " << enterNumber() << endl;

		}break;
		case '3':
		{
			cout << "3 -  Find NOD\n";
			int a, b;
			cout << "Enter first numb \n";
			cin >> a;
			cout << "Enter second numb \n";
			cin >> b;
			cout << findReturnNumb(a,b) << endl;


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
	
float returnsNumbDigit( int a )
{
	float number=0;
	while (a != 0)
	{
		
		a /= 10;
		number++;
	}
	return number;
}
		
float enterNumber(int min , int max )
{
	float numb;
	do
	{
		cout << " Enter numb (0...1000)\n ";
		cin >> numb;
	} while (numb<min || numb>max);
	return numb;
}
	
float findReturnNumb(int a , int b )
{
	float NOD = 0;
	for (int i = a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			NOD = (float)i;
			cout << " NOD = " << NOD << endl;
			break;
		}
	}
	return NOD;
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
