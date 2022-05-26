#include <iostream>

using namespace std;

void fill_arr(int**, int, int);
int count_k(int**, int, int);

int main()
{
	int** matrix;
	int n, m;
	int i;

	cout << "Enter size:" << endl;
	cin >> n >> m;

	matrix = new int* [n];
	for (i = 0; i < n; i++)
		matrix[i] = new int[m];

	cout << "Array:\n";
	fill_arr(matrix, n, m);

	cout << endl <<"k = " << count_k(matrix, n, m);

	return 0;
}
