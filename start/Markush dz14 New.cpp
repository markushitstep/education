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
		cout << "1 - 5...15\n";
		cout << "2 - student height\n";
		cout << "3 - Sum massive\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{

		case '1':
		{
			cout << "1 - 5...15\n";
			int arr[15];
			int size;
			int numb;
			int countNumb = 0;
			int min = 5;
			int max = 15;
			do {
				cout << "enter array size(5..15):" << endl;
				cin >> size;
			} while (size < min || size >max);
				for (int i = 0; i < size; i++)
				{
					cout << "Enter element " << i+1 << endl;
					cin >> arr[i];
				}
				cout << "Enter numb:\n";
				cin >> numb;
				for (int i = 0; i < size; i++)
				{
					if (numb == arr[i])
					{
						countNumb++;
					}
				}
				if (countNumb > 0)
					cout << " count elements =" << countNumb << endl;
				else
					cout << "nothing\t" << endl;
			

		}break;

		case '2':
		{
			cout << "2 - student height\n";
			const int SIZE = 15;
			int arr[SIZE];
			int count = 0;
			int sum = 0;
			float average = 0;
			int min = 120;
			int max = 170;


			for (int i = 0; i < SIZE; i++)
			{
				do
				{
					cout << " Enter " << i + 1 << " student height (120..170):" << endl;
					cin >> arr[i];
				} while (arr[i] < min || arr[i] > max);
				sum += arr[i];
			}
			average = (float)sum / SIZE;
			for (int i = 0; i < SIZE; i++)
			{
				if (arr[i] > average)
				{
					count++;
					cout <<"\tstudent height = "<< arr[i] << endl;
				}

			}
			cout << " count tall students = " << count << endl;

			//cout << count << endl;


		}break;

		case '3':
		{
			cout << "3 - Sum massive\n";
			const int SIZE = 5;
			int arr1[SIZE];
			int arr2[SIZE];
			int arr3[SIZE];
			for (int i = 0; i < SIZE; i++)
			{
				cout << " Enter element " << i + 1 << endl;
					cin >> arr1[i];
			}
			for (int i = 0; i < SIZE; i++)
			{
				cout << " Enter element " << i + 1 << endl;
				cin >> arr2[i];
			}
			for (int i = 0; i < SIZE; i++)
			{
				arr3[i] = arr1[i] + arr2[i];
				cout << " sum of elements " << i + 1 << " = " << arr3[i] << endl;

			}
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
