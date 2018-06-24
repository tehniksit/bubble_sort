#include <stdio.h>
#include <windows.h>

//implementation of sorting algorithm
void bubble_sort(int arr[], int n)
{
	int temp=0;
	
	for (int iterr = 0; iterr < n-1 ; iterr++)
	{
		for (int i = 0; i < n-1-iterr; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
			
		}
	}
	
	for (int j = 0; j < n; j++) {
		printf("%d ", arr[j]);
	}
	
}

int main() 
{
	unsigned int array_1[] = { 8, 1, 4, 3, 64, 45, 7, 6, 2, 21, 18 };
	int n = sizeof(array_1) / sizeof(array_1[0]);
	printf("Number of elements: %d\n", n);
	bubble_sort(array_1, n);
	return 0;
}

