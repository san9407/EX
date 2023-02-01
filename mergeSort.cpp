#include <stdio.h>

using namespace std;

int arr[10] = { 10, 8, 1, 3, 5, 7, 4, 9 ,2 ,6};
int temp[10];

void mergeSort(int s, int e)
{
	if (s >= e)
		return;
	int m = (s + e) >> 1;
	int i = s, j = m + 1, k = s;

	mergeSort(s, m);
	mergeSort(m + 1, e);

	while (i <= m || j <= e)
	{
		if (j > e)
			temp[k++] = arr[i++];
		else if (i > m)
			temp[k++] = arr[j++];
		else if (arr[i] < arr[j])
			temp[k++] = arr[i++];
		else
			temp[k++] = arr[j++];
	}
	for (i = s; i <= e; i++)
		arr[i] = temp[i];
}

int main()
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	puts("");

	mergeSort(0, 9);
	
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	puts("");
}
