// Programmer : Zahra Yaghoubi

#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	string word[] = { "computer","console","desktop" } , Select;
	char User[10] = {'-'} , A;
	int random;
    int Length=0;
	srand(time(0));
	random=rand()%3;
	Select = word[random];
	for (int i = 0; i <Select.length(); i++){
		Length=Length+1;}
	cout << "The radnom word has  " << Length << " letters and You can choose " <<Length + 3<<" letters"<< endl;
	for (int i = 0; i < Length; i++){
		cout << "-"<<'\t';}
	cout << '\n';
	for (int i = 0; i < Length; i++){
		User[i] = { '-' };}
	for (int i = 0; i < Length+3; i++)
	{
		{
			cout << "Please Enter one letter" << endl;
			cin >> A;
			if (isupper(A)) {
				A = tolower(A);
			}
			for (int i = 0; i < Length; i++)
			{

				if (Selected_word[i] == A )
				{
					User[i] = A;
				}
			}
			for (int i = 0; i < Length; i++)
			{
				cout << User[i];	
			}
			cout << "\nYou got " << Length + 2 - i << " letters left to choose" << endl;
			cout << "\n";
			if (Select == User)
				break;
		}
	}
	if (Select == User) {
		cout << "You won!" << endl;
	}
	else cout << "you lose!" << endl;
	system("pause");
	return 0;
}