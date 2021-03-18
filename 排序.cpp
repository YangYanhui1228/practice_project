#include <iostream>
using namespace std;

tempalte T
void Swap(T& a, T& b)
{
	T temp = b;
	T = a;
	b = temp;
}

void Sort(T* ary, unsigned count, bool BigtoS = true)
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
 	short b[6]{ 123, 456, 789, 256, 754, 870 };
	Sort(a, 6, false);
	Sort(b, 6, true);
	for (int i = 0; i < 6; i++) {
		std::cout << a[i] << std::endl;
	}
	for (int i = 0; i < 6; i++) {
		std::cout << b[i] << std::endl;
	}
	
	return 0;

}
