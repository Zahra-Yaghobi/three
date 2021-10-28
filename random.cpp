// Programmer : Zahra Yaghoubi

#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int Array[10]={ 0 }, A , g = 0 , q=0;
	srand(time(0));
	while (g!=10)
	{
		q = g;
		A = (rand() % 100) + 1;
		for (int i = 0; i<g; i++)
		{
			if (Array[i] == A)
			{
				i = g;
				g=g-1;
			}
		}
		if (q == g)
		{
			Array[j] = A;
			g=g+1;

		}
        if (q > g)
		{
			g=g+1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << Array[i] << '\t';
	}
	
	system("pause");
	return 0;
}