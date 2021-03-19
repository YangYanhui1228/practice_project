#include <iostream>
using namespace std;

int GetLen(char* a)
{
	int count = 0;

	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] < 0) i++;//关键代码
		count++;
	}
	return count;
}

int main()
{
	char b[] = "hhshh哈喽你好！";
	cout << GetLen(b) << endl;

}
