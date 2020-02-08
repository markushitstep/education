// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{

	cout << "1-triangle;\n";
	cout << "2-the numbers;\n";
	cout << "3-even/odd;\n";
	cout << "4-calculator;\n";
	char task{};
	cin >> task;
	switch (task)
	{

	case'1':
	{
		cout << "1-triangle;";

		int n;
		cout << "enter n:\n";
		cin >> n;
	}break;

	case'2':
	{
		cout << "2-the numbers;\n";
		const int NUM = 87;
		int count = 10;
		int ranNum = 0;
		while (count > 0)
		{
			cout << "Enter random number:\n";
			cin >> ranNum;
			if (ranNum > NUM)
			{
				cout << "it`s too mutch- " << ranNum << endl;
			}
			else if (ranNum == NUM)
			{
				cout << "You winn, number is :" << NUM << endl;
				break;
			}
			else
			{
				cout << "it`s too less-" << ranNum << endl;
			}
			count--;
			if (count == 0)
			{
				cout << "You loose number is :" << NUM << endl;
				break;
			}
		}
	}break;
	case'3':
	{
		cout << "3-even/odd;\n";

		int num;
		int even{};
		int odd{};

		cout << "Enter natural number:\n";
		cin >> num;
		while (num > 0)
		{
			if (num % 2 == 0) {
				even += 1;
			}
			else if (num % 2 != 0) {
				odd += 1;
			}
			num /= 10;
			

		}

		cout << "even:" << even << "-" << "odd:" << odd << endl;









	}break;

	case'4':
	{
		cout << "4-calculator;\n";

		int num = 0;
		char oper = ' ';
		int ravno = 0;
		char ok = ' ';

		while (true)
		{
			cout << "Enter random number:";
			cin >> num;
			cout << "Enter random oper (+||-||*||/):";
			cin >> oper;
			if (oper == '+')
			{
				ok = oper;
				ravno += num;
			}
			if (oper == '-')
			{
				ok = oper;
				ravno -= num;
			}
			if (oper == '*')
			{
				ok = oper;
				ravno *= num;
			}
			if (oper == '/')
			{
				ok = oper;
				ravno /= num;
			}
			if (oper == '=')
			{
				if (ok == '+') ravno += num;
				if (ok == '-') ravno -= num;
				if (ok == '*') ravno *= num;
				if (oper == '/') ravno /= num;
				cout << ravno << endl;
				ravno = 0;
			}


		}


	}break;

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
