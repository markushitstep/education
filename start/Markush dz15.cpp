// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main()
{
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - Max of this numb (....)\n";
		cout << "2 - general divider\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{


		case '1':
		{
			cout << "2 - student height\n";
			
			const int SIZE = 4;
			int arr[SIZE];
			int a,b;
			int max = 0;
			a = rand() % 1234 + 8765;
			cout << a << endl;
			for(int i=0; i<SIZE; i++)
			{
				b = a % 10;
				a = a / 10;
				arr[i] = b;
				if (arr[i] > max)
				{
					max = arr[i];
				}	
			}
			cout <<max << endl;
			
			
		}break;

		case '2':
		{
			cout << "2 - general divider\n";
			srand(time(NULL));
			int min = 1;
			int max = 10;
			int n1 = rand() % (max - min + 1) + min;
			int n2 = rand() % (max - min + 1) + min;
			cout << n1 << " " << n2 << endl;
			for (int i = 1; i < n1; i++)
			{
				if (n1 % i == 0 && n2 % i == 0)
				{
					cout << i << "  ";
				}
			}
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
