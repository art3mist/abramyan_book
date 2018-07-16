#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(0));
	const int n = 10;
	int a[n];
	double ar = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			ar = (a[i] + a[i + 1]) / 2;
			a[i] = ar;
		}
		else if (i == n - 1)
		{
			ar = (a[i - 1] + a[i]) / 2;
			a[i] = ar;
		}
		else
		{
			ar = (a[i - 1] + a[i] + a[i + 1]) / 3;
			a[i] = ar;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	system("pause");
	return 0;
}