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
		cout << "1 - 1,2,3...3,2,1\n";
		cout << "2 - Even-Odd\n";
		cout << "3 - Repeat\n";
		cout << "4 - Min Odd element\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{

		case '1':
		{
			cout << "1 - 1,2,3...3,2,1\n";
			const int SIZE = 10;
			int arr[SIZE];
			for (int i = 0; i < SIZE; i++)
			{
				cout << "Enter elements:\n";
				cin >> arr[i];
			}
			for (int i = SIZE - 1; i >= 0; i--)
			{
				cout << arr[i] << "\t";
			}
			cout << endl;
		}break;

		case '2':
		{
			cout << "2 - Even-Odd\n";
			const int SIZE = 10;
			int arr1[SIZE];
			int sumOdd = 0;
			int sumEven = 0;
			for (int i = 0; i < SIZE; i++)
			{
				cout << "Enter elements:\n";
				cin >> arr1[i];
				if (arr1[i] % 2 == 0)
				{
					sumEven += arr1[i];
				}
				else
				{
					sumOdd += arr1[i];
				}
				
			}
			cout << " summa Even =" << sumEven << "\t" <<"|"<< "summa Odd =" << sumOdd << "\t" << endl;


		}break;

		case '3':
		{
			cout << "3 - Repeat\n";
			const int SIZE = 10;
			int arr[SIZE];
			
			for (int i = 0; i < SIZE; i++)
			{
				cout << "Enter elements:\n";
				cin >> arr[i];
			}
			for (int i = 0; i < SIZE; i++)
			{
				for (int j =SIZE-1; j > i; j--)
				{
					if (arr[i] == arr[j])
					{
						
						cout << arr[i]<<"\t";
						break;
					}
				}
			}
			cout << endl;

		}break;
		case '4':
		{
			cout << "4 - Min Odd element\n";
			 const int SIZE= 10;
			int arr[SIZE];
			for (int i = 0; i < SIZE; i++)
			{
				cout << "Enter elements:\n";
				cin >> arr[i];
			}
			int min = arr[0];
			for(int i=0; i<SIZE; i++)
			{
				
				if ( arr[i]%2!=0 && arr[i] < min)
				{
					min= arr[i];
					
				}
			}
			cout << min << "\t" << endl;
			

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
