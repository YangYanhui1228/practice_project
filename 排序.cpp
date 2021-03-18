#include <iostream>
using namespace std;

void Swap(int& a, int& b)
{
	int temp = b;
	b = a;
	a = temp;
}

void Sort(int* ary, unsigned count, bool BigtoS = true)
{
	for (int i = 1; i < count ; i++)
	{
		for (int j = 1; j < count ; j++)
		{
			bool bcase = BigtoS ? (ary[j - 1] < ary[j]) : (ary[j - 1] > ary[j]);
			if (bcase) Swap(ary[j - 1], ary[j]);
		}
	}


}


int main()
{
	int a[6]{ 123, 456, 789, 256, 754, 870 };
	Sort(a, 6, false);
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << std::endl;
	}

	return 0;

}
