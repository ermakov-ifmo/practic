#include <iostream>
using namespace std;
int main()
{
	int a, b, sec, sec1, sec2;
	cin >> a >> b;
	sec1 = 2 * b + 40;
	sec2 = 39 + 2 * a;
	if (sec1 > sec2)
	{
		sec = sec1;
	}
	else
	{
		sec = sec2;
	}
	cout << sec << endl;
}
