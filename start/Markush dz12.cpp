// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - 1000-9999\n";
		cout << "2 - A-B\n";
		cout << "3 - Massive\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{

		case '1':
		{
			cout << "1 - 1000-9999\n";
			int min = 1000;
			int max = 9999;
			int num12 = 0;
			int num34 = 0;
			int num = 0;
			for (int i = min; i < max; i++)
			{
				bool simple = true;
				for (int del = 2; del < min / 2; del++)
				{
					if (i % del == 0)
					{
						simple = false;
						break;
					}
				}
				num12 = 0;
				num34 = 0;
				if (simple)
				{
					num12 += (i / 1000) + (i / 100 % 10);
					num34 += (i % 100 / 10) + (i % 10);
					if (num12 == num34)
					{
						cout << i << "-" << num12 << endl;
					}
				}
			}
		}break;

		case '2':
		{
			cout << "2 - A-B\n";
			int min = 1000;
			int max = 9999;
			int a, b = 0;
			int ab = 0;
			int ba = 0;
			for (int i = min; i < max; i++)
			{
				a = i / 100;
				b = i % 100;
				ab += a * 100 + b;
				ba += b * 100 + a;
				if (ab % 99 == 0 && ba % 49 == 0)
				{
					cout << a << " " << b << "\n";
				}

			}

			cout << endl;

		}break;

		case '3':
		{
			cout << "3 - Massive\n";
			const int SIZE = 4;
			int arr[SIZE] = { 2,5,7,8 };
			int sum = 0;
			for (int i = 0; i < SIZE; i++)
			{
				if (arr[i] % 2 != 0)
				{
					sum += arr[i];	
				}
				if (arr[i] % 2 == 0)
				{
					cout <<"even ="<< arr[i] << "\n";
				}
			}
			cout << "sum =" <<sum << endl;
			cout << endl;

		}break;
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
