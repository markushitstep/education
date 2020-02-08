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
		cout << "1 - Example ( (3*2...)\n";
		cout << "2 - Example ( 3+1...)\n";
		cout << "3 - left-right-up-down\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{


		case '1':
		{
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

		}break;

		case '2':
		{
			cout << "2 - Example ( 3+1...)\n";
			const int n1 = 4;
			const int n2 = 4;
			int arr[n1][n2];
			int a = 0;
			int b = 0;
			do
			{
				cout << "Enter numb (1...10)" << endl;
				cin >> a;
			} while (a < 1 || a>10);
			for (int i = 0; i < n1; i++)
			{
				for (int j = 0; j < n2; j++)
				{
					arr[i][j] = a;
					a += 1;
					cout << arr[i][j] << "\t";
				}
				cout << endl;
			}
		}break;
		case '3':
		{
			cout << "3 - left-right-up-down\n";
			const int ROW = 5;
			const int COL = 5;
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
							{
								cout << " 1 - right\n";
								for (int i = 0; i < ROW; i++)
								{
									for (int j = 0; j < COL; j += 5)
									{
										cout << arr[i][j + 3] << "\t" << arr[i][j + 4] << "\t" << arr[i][j ] << "\t" << arr[i][j+1] << "\t" << arr[i][j+2] << "\t";
									}
									cout << endl;
								}
							}break;
							case '2':
							{
								cout << " 2 - left\n";
								for (int i = 0; i < ROW; i++)
								{
									for (int j = 0; j < COL; j += 5)
									{
										cout << arr[i][j+2] << "\t" << arr[i][j + 3] << "\t" << arr[i][j + 4] << "\t" << arr[i][j] << "\t" << arr[i][j + 1] << "\t";
									}
									cout << endl;
								}
							}break;
							case '3':
							{
								cout << " 3 - up\n";
								for (int i = 0; i < ROW; i+=5)
								{
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i+2][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i + 3][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i + 4][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i + 1][j] << "\t";
									}
									cout << endl;
								}
							}break;
							case '4':
							{
								cout << " 4 - down\n";
								for (int i = 0; i < ROW; i += 5)
								{
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i + 3][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i + 4][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i+1][j] << "\t";
									}
									cout << endl;
									for (int j = 0; j < COL; j++)
									{
										cout << arr[i + 2][j] << "\t";
									}
									cout << endl;
								}

							}break;
					}break;
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
