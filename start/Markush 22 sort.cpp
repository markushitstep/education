// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;

#define SIZE 10

template <typename T>
inline T retRand(T min, T max, int order) { return (T)(rand() % (int)(max - min) * order) / order + min; }
template <typename T>
void fillArr(T arr[], int size, T min, T max, int order);
template <typename T>
void printArr(T arr[], int size);

template <typename T>
void getSorteMass(T arr[], int size);

template <typename T>
void getSumDigitMassive(T arr[], int size);
template<typename T>
void getSortSumMassive(T arr[], int size);


template<typename T>
int retRepCountDig(T arr[], int size, T key);

int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}
int main()
{

	

	srand(time(NULL));
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - Sort Massive Sum\n";
		cout << "2 - Repetitions \n";
		cout << "3 - Sort Massive Sum\n";
		cout << "4 - Sort Massive Sum\n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{



		case '1':
		{
			cout << "1 -Sort Massive Sum\n";
			//сортируем массив по сумме

			int MtxInt[SIZE]{};
			int min1 = 10;
			int max1 = 100;
			fillArr(MtxInt, SIZE, min1, max1, 1);
			cout << " Integer array: \n";
			printArr(MtxInt, SIZE);
			getSorteMass(MtxInt, SIZE);
			printArr(MtxInt, SIZE);
			cout << " array the sum:\n ";
			getSumDigitMassive(MtxInt, SIZE);
			printArr(MtxInt, SIZE);
			cout << " sort sum massive:\n";
			getSortSumMassive(MtxInt, SIZE);
			printArr(MtxInt, SIZE);

			char  MtxChar[SIZE]{};
			char  min2 = 'a';
			char  max2 = 'w';
			fillArr(MtxChar, SIZE, min2, max2, 1);
			cout << " Char array: \n";
			printArr(MtxChar, SIZE);

		}break;


		case '2':
		{
			cout << " 2 - Repetitions \n";
			//возвращаем количество повторений 

			int MtxInt[SIZE]{};
			int min1 = 0;
			int max1 = 10;
			fillArr(MtxInt, SIZE, min1, max1, 1);
			cout << " Integer array: \n";
			printArr(MtxInt, SIZE);
			int  key = rand() % 10;
			int count = retRepCountDig(MtxInt, SIZE, key);
			if (count != 0) cout << " repetitions = " << count << " - " << key << endl;
			else
				cout << " not found \n" << count << endl;




		}break;
		case '3':
		{
			cout << "3 - Sort Massive Sum\n";
			///*void Disk(int from, int to)
			//{
			//	cout << from << "-->" << to << endl;
			//}
			//void Tower(int h, int x, int z, int y)
			//{
			//	if (h == 1)
			//		Disk(x, z);
			//	else
			//	{
			//		Tower(h - 1, x, y, z);
			//		Disk(x, z);
			//		Tower(h - 1, y, z, x);
			//	}
			//}

			//int main()
			//{
			//	unsigned short number;
			//	cout << "The Hanoi towers" << endl;
			//	cout << "vvedite kolichestvo diskov:: ";
			//	cin >> number;
			//	Tower(number, 1, 3, 2);
			//	getch();
			//	return 0;*/

		}break;
		case '4':
		{
			cout << "4 - Sort Massive Sum\n";



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
template <typename T>
void fillArr(T arr[], int size, T min, T max, int order)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = retRand(min, max, order);
	}
}
template <typename T>
void printArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T>
void getSorteMass(T arr[], int size)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		temp = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
template <typename T>
void getSumDigitMassive(T arr[], int size)
{

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = 0;
		while (arr[i] > 0)
		{
			sum += arr[i] % 10;
			arr[i] /= 10;
		}
		arr[i] = sum;
	}

}
template<typename T>
void getSortSumMassive(T arr[], int size)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
template<typename T>
int  retRepCountDig(T arr[], int size, T key)
{

	int countDig{0};
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			countDig++;

		}
	}
	return countDig;
	
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
