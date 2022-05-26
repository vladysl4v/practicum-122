#include <iostream>

using namespace std;

void fill_arr(int** arr, int n, int m)
{
	int i, j;
	srand((unsigned)time(NULL));

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 41 + 5;
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
}

int count_k(int** arr, int n, int m)
{
	int i, j;
	int k = 0;
	for (j = 0; j < m; j++)
	{
		int sum = 0;
		for (i = 0; i < n; i++)
		{
			sum += arr[i][j];
		}
		for (i = 0; i < n; i++)
		{
			if ((sum - arr[i][j]) < arr[i][j])
			{
				k += 1;
				//cout << arr[i][j] << endl;
			}
		}

	}
	return k;
}