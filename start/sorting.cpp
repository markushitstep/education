// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
void retSortMassive(T arr[], int size, int digit = 1);
template <typename T>
void retSortDecrease(T arr[], int size);
template <typename T>
void retSortIncrease(T arr[], int size);
template <typename T>
int findExtremeNegative(T arr[], int size);

#define SIZE1 20
template <typename T>
void retRandM(T arr[], int size);
template <typename T>
void getRandMassive(T arr[], int size);
template <typename T>
T getRandDigitFind(T arr[], int size , T key=rand()%20);
template <typename T>
void getSortMassiveFinderDigit(T arr[], int size, T key);



int main()
{
	srand(time(NULL));
	char task{};
	while (true || task != '0')
	{
		system("cls"); //clear screen
		cout << "1 - Decrease\n";
		cout << "2 - Increase \n";
		cout << "3 - Increase \n";
		cout << "4 - Increase \n";
		cout << "0 - Exit! \n";
		cout << "Make your choice:\n";
		cin >> task;
		if (task == '0') break;
		switch (task)
		{



		case '1':
		{
			cout << "1 - Decrease\n";
			int MtxInt[SIZE]{};
			int min1 = 0;
			int max1 = 10;
			fillArr(MtxInt, SIZE, min1, max1, 1);
			cout << " Integer array: \n";
			printArr(MtxInt, SIZE);
			cout << " Integer array decrease:\n";
			retSortDecrease(MtxInt, SIZE);
			printArr(MtxInt, SIZE);




		}break;


		case '2':
		{
			cout << " 2 - Increase \n";

			int MtxInt[SIZE]{};
			int min1 = 0;
			int max1 = 10;
			fillArr(MtxInt, SIZE, min1, max1, 1);
			cout << " Integer array: \n";
			printArr(MtxInt, SIZE);
			cout << " Integer array increase:\n";
			retSortIncrease(MtxInt, SIZE);
			printArr(MtxInt, SIZE);

			char  MtxChar[SIZE]{};
			char  min2 = 'a';
			char  max2 = 'w';
			fillArr(MtxChar, SIZE, min2, max2, 1);
			cout << " Char array: \n";
			printArr(MtxChar, SIZE);
			cout << " Char array increase:\n";
			retSortIncrease(MtxChar, SIZE);
			printArr(MtxChar, SIZE);


		}break;
		case '3':
		{
			cout << "3 - Increase \n";
			int MtxInt[SIZE]{};
			int min1 = -20;
			int max1 = 20;
			fillArr(MtxInt, SIZE, min1, max1, 1);
			cout << " Integer array: \n";
			printArr(MtxInt, SIZE);


			//int key = retRand(min1, max1, 1);
			int pos = findExtremeNegative(MtxInt, SIZE);
			if (MtxInt[pos] != -1) cout << " pos   = " << pos << " digit = " << MtxInt[pos] << endl;
			else
				cout << " not found \n";

		}break;
		case '4':
		{
			cout << "4 - Increase \n";
			int MtxInt[SIZE1]{};
			cout << " Integer array: \n";
			retRandM(MtxInt, SIZE1);
			printArr(MtxInt, SIZE1);
			cout << " Random massive: \n";
			getRandMassive(MtxInt, SIZE1);
			printArr(MtxInt, SIZE1);
			cout << " Random digit: \n";
			int pos = getRandDigitFind(MtxInt, SIZE1);
			if (pos != -1) cout << " pos = " << pos << " digit = " << MtxInt[pos] << endl;
			else
				cout << " not found \n" << MtxInt[pos] << endl;
			cout << " sort:\n";
			getSortMassiveFinderDigit(MtxInt, SIZE1, pos);
			printArr(MtxInt, SIZE1);
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
void retSortMassive(T arr[], int size, int digit)
{
	if (digit == 1)
	{
		retSortDecrease(arr, size);
	}
	else
	{
		retSortIncrease(arr, size);
	}
}
template <typename T>
void retSortDecrease(T arr[], int size)
{
	//T temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				arr[j] = arr[j] + arr[i];
				arr[i] = arr[j] - arr[i];
				arr[j] = arr[j] - arr[i];
				//temp = arr[i];
				//arr[i] = arr[j];
				//arr[j] = temp;
			}
		}
	}
}
template <typename T>
void retSortIncrease(T arr[], int size)
{


	T temp;
	for (int i = 0; i < size; i++)
	{
		temp = arr[i];
		for (int j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
			arr[j] = temp;

		}
	}
}
template <typename T>
int findExtremeNegative(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) return i;
	}
	return -1;
}
template <typename T>
void retRandM(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
template <typename T>
void getRandMassive(T arr[], int size)
{
	int rnd, digit;
	for (int i = 0; i < size; i++)
	{
		rnd = rand() % 20;
		digit = arr[rnd];
		arr[rnd] = arr[i];
		arr[i] = digit;
	}
}
template <typename T>
T getRandDigitFind(T arr[], int size, T key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key) return i;
	}
	return -1;
	
}
template <typename T>
void getSortMassiveFinderDigit(T arr[], int size, T key)
{
	T temp;
	for (int i = 0; i < key; i++)
	{
		for (int j = i + 1; j < key; j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = key; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
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
