//#ifdef _FUNCTION_H_ //чтобы повторно не выгруэал функции, если они уже есть
//#define _FUNCTION_H_
#include<ctime> 
#include<cstdlib> //библиотеки, подключенные в заголовочном файле, используются во всем проекте, и не обязательно переподключать их в source и других
#include<iostream>


#ifdef INTEGER //ifdef это макрос, который проверяет, есть ли у нас константа под названием INTEGER или под любым другим, своим
void fillArray(int *a, int n);
void printArray(int *a, int n);
int minArray(int *a, int n);
void sortArray(int *a, int n);
#define fill fillArray// создание псевдонима(обобщающие имена) для функции
#define show printArray
#define min minArray
#define sort sortArray
#endif // для каждого ifdef всегда должен быть

#ifdef DOUBLE
void fillArray(double *a, int n);
void printArray(double *a, int n);
double minArray(double *a, int n);
void sortArray(double *a, int n);
#define fill fillArray
#define show printArray
#define min minArray
#define sort sortArray
#endif

#ifdef CHAR
void fillArray(char *a, int n);
void printArray(char *a, int n);
char minArray(char *a, int n);
void sortArray(char *a, int n);
//#define fillArrayChar fillArray
#define fill fillArray
#define show printArray
#define min minArray
#define sort sortArray
#endif

//#endif //для верхнего #ifdef _FUNCTION_H_
