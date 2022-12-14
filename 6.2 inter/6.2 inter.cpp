#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void mas(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = rand(); 
		cout << a[i] << " ";
	}
	cout << endl;
}
int iMax(int* a, int size)
{
	int max = a[0];
	int imax;
	for (int i = 0; i < size; i++)
		if (a[i] > max && a[i] % 2 == 0)
		{
			max = a[i];
			imax = i;
		}
	return imax;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 15; 
	int a[n];
	mas(a, n);
	cout << "imax = " << iMax(a, n) << endl;
	return 0;
}