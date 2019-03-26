#include<ctime>
#include<cstdlib>
#include<iostream>
#include"function.h"//нужно подключить свой header

using namespace std;

//Создать проект в котором :
//1.создать три файла : (function.h, function.cpp, prog.cpp)
//2.в файле function.cpp необходимо написать следующие функции для работы с массивом данных :
//а ) функцию для заполнения массива случайными значениями;
//б) функцию для вывода значений массива на консоль;
//в ) функцию для поиска минимального элемента;
//г ) функцию для поиска максимального элемента;
//д ) функцию для сортировки;
//е ) функцию для редактирования значения массива.
//Данные функции необходимо написать для работы с массивом целых, действительных и символьных значений . (Для каждого типа написать отдельную функцию) .
//3.в файле function.h нужно :
//а ) описать прототипы всех функций;
//б) сделать проверку определена ли константа, указывающая на тип данных(# ifdef INTEGER)
//в ) создать обобщающие имена функции, которым будет определена функция соответствующего типа в зависимости от константы, указанной в файле prog.cpp . (# define show ShowInt)
//
//4.в файле prog.cpp нужно :
//а) в функции main вызвать все функции через переозначеные(обобщенные) имена из файла function.h(show())
//б) определить константу, которая указывает какой тип данных будет использоваться.Например INTEGER - целые данные, CHAR - символьные DOUBLE - настоящие . (# define INTEGER)
//Имя функциям нужно давать так, чтобы они отвечали своей сути.Например функция для вывода значений массива целых чисел на консоль - ShowArrayInt().А, когда переопределяем функцию с помощью # define то нужно давать общее имя.Например # define ShowArray ShowArrayInt

//Условия к задачам :
//1. Для определения констант использовать директиву # define
//2. Чтобы проверить определена константа или нет использовать директивы # ifdef - # endif; # ifndef - # endif
//3. Для определения части кода, которая должна компилироваться или не должна использовать - #if #else #endif
//4. Собственные файлы заголовков(headers) описывать с помощью директив так, чтобы избежать многократного подключение файла заголовка в другие файлы.


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
		a[i] = double(rand() % 101) / (rand()%100 + 1); //генерирование даббл случайных чисел, +1 чтобы не было деления на ноль;
	// сначала генерируется целое число, потом превращается в даббл, чтобы при деление на целое число не терял свою дробную часть
}
void printArray(double *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
double minArray(double *a, int n)
{
	double min = a[0];

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
		a[i] = rand() % 101 + 65; // +65 чтобы начать генерирование с ASCII кода 'A'
}
void printArray(char *a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
char minArray(char *a, int n)
{
	char min = a[0];

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