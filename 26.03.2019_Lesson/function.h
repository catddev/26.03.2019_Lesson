#ifdef INTEGER //ifdef это макрос, который проверяет, есть ли у нас константа под названием INTEGER или под любым другим, своим
void fillArray(int *a, int n);
void printArray(int *a, int n);
int minArray(int *a, int n);
void sortArray(int *a, int n);
#define fill fillArray// создание псевдонима(обобщающие имена) для функции
#define show printArray
#endif // для каждого ifdef

#ifdef DOUBLE
void fillArray(double *a, int n);
void printArray(double *a, int n);
double minArray(double *a, int n);
void sortArray(double *a, int n);
#define fill fillArray
#define show printArray
#endif

#ifdef CHAR
void fillArray(char *a, int n);
void printArray(char *a, int n);
char minArray(char *a, int n);
void sortArray(char *a, int n);
//#define fillArrayChar fillArray
#define fill fillArray
#define show printArray
#endif
