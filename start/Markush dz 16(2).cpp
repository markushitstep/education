// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main()
{
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - all inside\n";
		cout << "2 - Example ( 3+1...)\n";
		cout << "3 - left-right-up-down\n";
		cout << "4 - 5x10...5x5\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{


		case '1':
		{
			cout << "1 - Example ( 3*2...)\n";
			const int ROW = 4;
			const int COL = 4;
			int arr[ROW][COL];
			int min = 0;
			int max = 9;

			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					arr[i][j] = rand() % (max - min + 1) + min;
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
			int sum{};
			int average{};
			int minE{};
			int maxE{};
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					sum += arr[i][j];
					average = sum / (ROW * COL);
					if (arr[i][j] < minE)
					{
						minE = arr[i][j];
					}
					if (arr[i][j] >= maxE)
					{
						maxE = arr[i][j];
					}
				}
			}
			cout << " sum of elements = " << sum << endl;
			cout << " average is = " << average << endl;
			cout << " min elements is = " << minE << endl;
			cout << " max elements is = " << maxE << endl;
		}break;


		case '2':
		{
			cout << "2 - Example ( 3+1...)\n";
			const int n1 = 3;
			const int n2 = 4;
			int arr[n1][n2];
			int min = 0;
			int max = 9;
			int sum;

			int average{};
			for (int i = 0; i < n1; i++)
			{
				sum = 0;

				for (int j = 0; j < n2; j++)
				{

					arr[i][j] = rand() % (max - min + 1) + min;
					cout << arr[i][j] << "\t";
					sum += arr[i][j];


				}
				cout << "|" << sum << endl;
			}
			cout << setfill('-') << setw(36);
			cout << " " << endl;
			for (int j = 0; j < n2; j++)
			{
				sum = 0;
				for (int i = 0; i < n1; i++)
				{
					sum += arr[i][j];

				}
				average += sum;
				cout << sum << "\t";
			}
			cout << "|" << average << endl;





		}break;
		case '3':
		{
			cout << "3 - left-right-up-down\n";
			const int ROW = 50;
			const int COL = 50;
			int arr[ROW][COL];
			int min = 0;
			int max = 9;
			int temp = 0;

			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					arr[i][j] = rand() % (max - min + 1) + min;
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
			while (true)
			{
				cout << " 1 - right\n";
				cout << " 2 - left\n";
				cout << " 3 - up\n";
				cout << " 4 - down\n";
				cout << "0 - Exit! \n";
				cout << "Make your choice:\n";
				cin >> task;
				if (task == '0') break;
				switch (task)
				{
				case '1':
					for (int i = 0; i < ROW; i++)
					{
						for (int j = COL - 1; 0 < j; j--)
						{
							temp = arr[i][j];
							arr[i][j] = arr[i][j - 1];
							arr[i][j - 1] = temp;
						}
					}
					break;
				case '2':
					for (int i = 0; i < ROW; i++)
					{
						for (int j = 0; j < COL - 1; j++)
						{
							temp = arr[i][j];
							arr[i][j] = arr[i][j + 1];
							arr[i][j + 1] = temp;
						}
					}break;
				case '3':
					for (int j = 0; j < COL; j++)
					{
						for (int i = 0; i < ROW - 1; i++)
						{
							temp = arr[i][j];
							arr[i][j] = arr[i + 1][j];
							arr[i + 1][j] = temp;
						}
					}
					break;
				case '4':
					for (int j = 0; j < COL; j++)
					{
						for (int i = ROW - 1; 0 < i; i--)
						{
							temp = arr[i][j];
							arr[i][j] = arr[i - 1][j];
							arr[i - 1][j] = temp;
						}
					}
					break;
				}
				for (int i = 0; i < ROW; i++)
				{
					for (int j = 0; j < COL; j++)
					{
						cout << arr[i][j] << '\t';
					}
					cout << endl;
				}
			}
		}
		case '4':
		{
			cout << "4 - 5x10...5x5\n";
			const int ROW = 5;
			const int COL = 10;
			int arr[ROW][COL];
			int max = 50;
			int min = 0;
			const int COL1 = 5;
			int arr1[ROW][COL1];
			int sum = 0;
			cout << "\t5 x 10 : " << endl;
		
			
			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j++)
				{
					arr[i][j] = rand() % (max - min + 1) + min;
					cout << arr[i][j] << "\t";
					
				}
				cout << endl;
			}
			cout << "\t5 x 5 : " << endl;

			for (int i = 0; i < ROW; i++)
			{
				for (int j = 0; j < COL; j+=2)
				{
					arr1[i][j] = arr[i][j] + arr[i][j + 1];
					cout << arr1[i][j] << "\t";
				}
				cout << endl;

			}
		}
		break;


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
