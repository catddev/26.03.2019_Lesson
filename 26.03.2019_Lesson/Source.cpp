
#define INTEGER //макрос? заставляющий работать заголовочные файлы function.h должен стоять до него
#define DOUBLE //если скрыть эту строку, то в мэйне где есть #ifdef DOUBLE тоже скроется
#define CHAR
#include"function.h" // наша собственная написанная библиотека
//#include "function.cpp" //нельзя, если НЕ прописан #ifdef _FUNCTION_H_, т.к. уже подключена библиотека "function.h"

#define N 4; //объявление константы, альтернативный const int
#define begin { //макросы, для объявления псевдонимов
#define end }
#define program int main()
#define print cout<<
#define maximum(a, b)(a>b?a:b)
#define even(a)(a%2==0?true:false) //или просто #define even(a)(a%2==0)
#define odd(a)(a%2!=0)
using namespace std;

//3.	Написать программу, которая буду выводить информацию о стране и о столице данной страны.
// Страна о которой нужно вывести информацию определяется с помощью констант.Для этого нужно :
//1 ) Создать структуру, которая будет содержать информацию о столице страны(минимум 4 - поля);
//2 ) Создать структуру, которая будет содержать информацию о стране(минимум 5 - ть полей) и одним из этих полей должна быть структура столица .
//3 ) Создать минимум 3 объекта(переменные) структуры страны и заполнить их информацией.
//4 ) В программе должно делаться проверка, есть ли определенная константе страна,
// если она установлена, то делать проверку, какой стране соответствует данная константа и выводить информацию о данной стране.
// Затем делать проверку определена ли константа столица, если определена то выводить информацию о столице данной страны.
// И так для всех стран.
//5 ) Нужно создать константу для каждой страны, которые мы описали в объектах структуры.Например(# define USA 1 i # define UA 2 и т.д.) .
//6 ) Нужно определить две константы страна и столица.Константе страна нужно придать значение соответствующей страны.
// А константу столица нужно просто определить.
// Например:
//# define USA 1
//# define UA 2
//# define COUNTRY UA
//# define CAPITAL


struct Country {
	struct Capital{
		int year;
		int area;
		int population;
		char climate;
	}city;
	int c_area;
	int c_population;
	char polit;
	char administration;
};

Country cs[3];
ifstream in_file("in.txt");



//макросы (для безопасности по большей части)
program begin

//int a = 'z';
//const int b = 100;
//print maximum(a, b) << endl;
//print even(b) << endl;
//print odd(a) << endl;

int *a;
double *d;
char *c;
int n;
cin >> n;

#if N>3 //альтернатива #ifdef INTEGER
a = new int[n];
fill(a, n);
show(a, n);
cout << endl;
cout << min(a, n) << endl;
sort(a, n);
show(a, n);
cout << endl;
delete[] a;
//#endif

#elif N<2 //else if
//#ifdef DOUBLE
d = new double[n];
fill(d, n);
show(d, n);
cout << endl;
cout << min(d, n) << endl;
sort(d, n);
show(d, n);
cout << endl;
delete[] d;
//#endif

#else
//#ifdef CHAR
c = new char[n];
fill(c, n);
show(c, n);
cout << endl;
cout << min(c, n) << endl;
sort(c, n);
show(c, n);
cout << endl;
delete[] c;
#endif //#if #elif #else - в конце только один #endif



system("pause");
end

