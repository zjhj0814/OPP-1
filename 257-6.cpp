#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int col = 1;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)
		{
			cout << setw(3) << i;
			col++;
			if (col > 5)
			{
				cout << endl;
				col = 1;
			}
		}
	}
}