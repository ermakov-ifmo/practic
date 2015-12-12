#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int* arr = new int[N + 1];

	for (int i = 0; i <= N; i++)
	{
		arr[i] = 0;
	}

	int m = N / 2;

	for (int i = 1; i <= m; i++)
	{

		for (int j = i + i; j <= N; j += i)
			arr[j] += i;
	}

	for (int i = 1; i <= N; i++)
	{
		if (arr[i] <= N && arr[i] != i && arr[arr[i]] == i)
		{
			cout << arr[i] << "\t  " << i << std::endl;
			arr[i] = 0;
		}
	}
}
