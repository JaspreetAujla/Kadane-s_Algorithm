#include<iostream>
#include<climits>
using namespace std;

int kadane(int m[], int size)
{
	int max_starting = INT_MIN, max_ending = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending = max_ending + m[i];
		if (max_starting < max_ending)
			max_starting = max_ending;

		if (max_ending < 0)
			max_ending = 0;
	}
	return max_starting;
}

int main()
{
	int m[] = {-2, -5, 6, -4, -3, 8, 7, -1};
	int n = sizeof(m)/sizeof(m[0]);
	int max_sum = kadane(m, n);
	cout << "Maximum contiguous sum is: " << max_sum;
	return 0;
}
