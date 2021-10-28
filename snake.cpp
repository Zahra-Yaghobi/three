// Programmer : Zahra Yaghoubi

#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the Size of Snake : " << endl;
    int snake;
	cin >> snake;
	for (int i = 1; i <= snake; i++)
	{
		cout << "*#";
	}
}