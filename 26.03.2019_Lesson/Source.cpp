
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include<math.h>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>

using namespace std;

template<typename T>
void add(T*&cc, T c) {
	if (buffer_size == 0)
	{
		buffer_size = 4;
		cc = new T[buffer_size];
	}
	else
	{
		if (current_size == buffer_size)
		{
			buffer_size *= 2;
			T*tmp = new T[buffer_size];
			for (int i = 0; i < current_size; i++)
				tmp[i] = cc[i];
			delete[] cc;
			cc = tmp;
		}
	}
	cc[current_size++] = c;
}



int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn; cin.get();

		switch (tn)
		{
		case 1:
		{

		}
		break;
		case 2:
		{

		}
		break;
		case 3:
		{

		}
		break;
		case 4:
		{

		}
		break;
		case 5:
		{

		}
		break;
		case 6:
		{

		}
		break;
		case 7:
		{

		}
		break;
		case 8:
		{

		}
		break;
		case 9:
		{

		}
		break;
		case 10:
		{

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}