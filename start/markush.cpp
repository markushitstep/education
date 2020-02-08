// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>




using namespace std;

int main() //точка входа в программу
{ //Начало блока

	cout << "1-calculate;\n";
	cout << "2-symbols;\n";
	cout << "3-programmer;\n";
	cout << "4-ternarnic;\n";
	cout << "make your choice:";
	char task{};
	cin >> task;
	switch (task)
	{
	case '1':
	{
		cout << "1-calculate;\n";
		float firstNumb, secondNumb;
		char symvol{};
		cout << "Enter first number:\n";
		cin >> firstNumb;
		cout << "Enter znak:\n";
		cin >> symvol;
		cout << "Enter second number:\n";
		cin >> secondNumb;
		switch (symvol)
		{
		case'*':
		{
			cout << firstNumb << " * " << secondNumb << " = " << firstNumb * secondNumb << "\n";
		}break;
		case'/':
		{

			if (secondNumb == 0)
			{
				cout << "Error\n";
			}
			else
			{
				cout << firstNumb << " / " << secondNumb << " = " << firstNumb / secondNumb << "\n";
			}
		}break;
		case'+':
		{
			cout << firstNumb << " + " << secondNumb << " = " << firstNumb + secondNumb << "\n";
		}break;
		case'-':
		{
			cout << firstNumb << " - " << secondNumb << " = " << firstNumb - secondNumb << "\n";
		}break;
		default:
		{
			cout << "Error\n;";
		}break;
		}


	}break;
	case '2':
	{
		cout << "2-symbols;\n";
		char symb{};
		cout << "Enter symb:\n";
		cin >> symb;
		if (symb >= 0 && symb < 32 || symb == 127)
		{
			cout << "Not print :\n";
		}
		else if (symb >= 48 && symb < 57)
		{
			cout << "digit\n";
		}
		else if (symb >= 65 && symb < 91 || symb >= 97 && symb < 123)
		{
			cout << "leter\n";
		}
		else
		{
			cout << "other symbol\n";
		}

	}break;
	case '3':
	{
		cout << "3-programmer;\n";
		const int SALARY = 50;
		const int STRING = 100;
		const int LATE = 20;
		const int COUNT_LATE = 3;
		cout << "1-count line of string\n";
		cout << "2-count late\n";
		cout << "3-count total salary\n";
		char task3{};
		cout << "choose task\n";
		cin >> task3;
		switch (task3)
		{
		case'1':
		{
			int money{}, amountLate{}, amountStr{};
			cout << "Enter disire money:\n";
			cin >> money;
			cout << "Enter amount of late:\n";
			cin >> amountLate;
			amountStr = (money + amountLate / COUNT_LATE * LATE) * STRING / SALARY;
			cout << "line of str =" << amountStr << endl;
		}break;
		case'2':
		{
			int string{}, money{}, late{};
			cout << "Enter number string:\n";
			cin >> string;
			cout << "Enter number money:\n";
			cin >> money;
			late = ((SALARY * (string / STRING) - money) / 20) * COUNT_LATE;
			if (late < 0)
			{
				cout << "Error\n";
			}
			else
			{
				cout << late << " days " << endl;
			}

		}break;
		case'3':
		{
			int string{}, late{}, money{}, numbString{};
			cout << "Enter number string:\n";
			cin >> string;
			cout << "Enter number late`s:\n";
			cin >> late;
			money = ((string / 2) - ((late / COUNT_LATE) * LATE));
			numbString = money * 2;
			if (numbString > string)
			{
				cout << "you will not get your money\n";
			}
			else
			{
				cout << money << "for your string" << endl;
			}

		}break;
		default:
		{
			cout << "oops\n";
		}break;
		}



	}break;
	case '4':
	{
		cout << "4-ternarnic;\n";

		char letter;

		cout << "Enter random letter:\n";
		cin >> letter;

		if (letter >= 65 && letter < 91)
		{
			cout << (char)(letter + 32) << "-letter" << endl;
		}
		else if (letter >= 97 && letter < 123)
		{
			cout << (char)(letter - 32) << "-letter" << endl;
		}
		else
		{
			cout << letter << "-letter" << endl;
		}

	}break;
	default:
	{
		cout << "task not found;";
	}break;
	}


} //конец блока



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
