// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - ANSI\n";
		cout << "2 - galstuk\n";
		cout << "3 - romb\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{

		case '1':
		{
			

			
		
				
			
			

		}break;
		case '2':
		{
			cout << "2 - galstuk\n";
			const int ROW = 7;
			const int COL = 7;
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					if (i <= ROW / 2 && j <= COL / 2 && i >= j || i >= ROW / 2 && j <= COL / 2 && i + j <= ROW - 1)
					{
						cout << "* ";
					}
					else if (  i<=ROW/2 && j>=COL/2 && i+j>=ROW-1 || i >= ROW / 2 && j >= COL / 2 && j>=i)
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}



		}break;
		case '3':
		{
			
			cout << "2 - galstuk\n";
			const int ROW = 7;
			const int COL = 7;
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					if (i <= ROW / 2 && j <= COL / 2 && i >= j || i >= ROW / 2 && j <= COL / 2 && i + j <= ROW - 1)
					{
						cout << "* ";
					}
					else if (i <= ROW / 2 && j >= COL / 2 && i + j >= ROW - 1 || i >= ROW / 2 && j >= COL / 2 && j >= i)
					{
						cout << "* ";
					}
					else
					{
						cout << "  ";
					}
				}
				cout << endl;
			}

		}break;

		default:
		{
			cout << "error\n";
		}break;
		}
		system("pause");
	}
	cout << "Bye:)\n";
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
