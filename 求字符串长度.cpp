#include <iostream>
using namespace std;


int GetLen(char* a)
{
	int count = 0;

	for (int i = 0; a[i] != 0; i++)
	{
		count++;
	}
	return count;
}

int main()
{
	char b[] = "hhshh";
	cout << GetLen(b) << endl;
}