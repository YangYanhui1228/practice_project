#include <iostream>
using namespace std;

int GetLen(char* a)
{
	int count = 0;

	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] < 0) i++;  //a[i]<0 是关键代码，可替换为(unsigned)a[i]>127
		count++;
	}
	return count;
}

int main()
{
	char b[] = "hhshh哈喽你好！";
	cout << GetLen(b) << endl;

}
