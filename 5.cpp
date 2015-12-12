#include "iostream" 
using namespace std;

int main()
{
	int larry;
	cin >> larry;
	int garry;
	cin >> garry;
	int vse = larry + garry - 1;
	if (vse > 10)
	{
		cout << endl << "kto-to vret" << endl;
	}
	else
	{
		cout << endl << vse - larry << " " << vse - garry << endl;
	}
}