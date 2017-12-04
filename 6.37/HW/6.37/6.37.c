#include <stdio.h>
#include <stdlib.h>
#define array_size 10

int array[array_size] = { 1, 2, 3, 4, 5 , 6, 7, 8, 9, 10 };
int FindMax(int *data);
int i = 0, maxdata = 0,array_max;

int main(void)
{
	array_max = FindMax(array);

	printf("array=");
	for (i = 0; i < array_size; i++)printf(" %d", array[i]);
	printf("\n陣列中最大的數值為 %d\n", array_max);

	system("pause");
	return 0;
}

int FindMax(int *data)
{
	if (data[i] > maxdata)
	{
		maxdata = data[i];
	}
	
	i++;
	if (i < array_size) FindMax(&array);
	else if (i == array_size) return maxdata;
}