
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

