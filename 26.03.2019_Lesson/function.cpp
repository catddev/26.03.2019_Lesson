#include<ctime>
#include<cstdlib>
#include<iostream>
#include"function.h"//����� ���������� ���� header

using namespace std;

//������� ������ � ������� :
//1.������� ��� ����� : (function.h, function.cpp, prog.cpp)
//2.� ����� function.cpp ���������� �������� ��������� ������� ��� ������ � �������� ������ :
//� ) ������� ��� ���������� ������� ���������� ����������;
//�) ������� ��� ������ �������� ������� �� �������;
//� ) ������� ��� ������ ������������ ��������;
//� ) ������� ��� ������ ������������� ��������;
//� ) ������� ��� ����������;
//� ) ������� ��� �������������� �������� �������.
//������ ������� ���������� �������� ��� ������ � �������� �����, �������������� � ���������� �������� . (��� ������� ���� �������� ��������� �������) .
//3.� ����� function.h ����� :
//� ) ������� ��������� ���� �������;
//�) ������� �������� ���������� �� ���������, ����������� �� ��� ������(# ifdef INTEGER)
//� ) ������� ���������� ����� �������, ������� ����� ���������� ������� ���������������� ���� � ����������� �� ���������, ��������� � ����� prog.cpp . (# define show ShowInt)
//
//4.� ����� prog.cpp ����� :
//�) � ������� main ������� ��� ������� ����� �������������(����������) ����� �� ����� function.h(show())
//�) ���������� ���������, ������� ��������� ����� ��� ������ ����� ��������������.�������� INTEGER - ����� ������, CHAR - ���������� DOUBLE - ��������� . (# define INTEGER)
//��� �������� ����� ������ ���, ����� ��� �������� ����� ����.�������� ������� ��� ������ �������� ������� ����� ����� �� ������� - ShowArrayInt().�, ����� �������������� ������� � ������� # define �� ����� ������ ����� ���.�������� # define ShowArray ShowArrayInt

void fillArray(int *a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 101;
}
void printArray(int *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int minArray(int *a, int n)
{
	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
void sortArray(int *a, int n) //insertion sort
{
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}
//
void fillArray(double *a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = double(rand() % 101) / (rand()%100 + 1); //������������� ����� ��������� �����, +1 ����� �� ���� ������� �� ����;
	// ������� ������������ ����� �����, ����� ������������ � �����, ����� ��� ������� �� ����� ����� �� ����� ���� ������� �����
}
void printArray(double *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
double minArray(double *a, int n)
{
	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
void sortArray(double *a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}
//
void fillArray(char *a, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 101 + 65; // +65 ����� ������ ������������� � ASCII ���� 'A'
}
void printArray(char *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
char minArray(char *a, int n)
{
	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
void sortArray(char *a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j > 0; j--)
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
}