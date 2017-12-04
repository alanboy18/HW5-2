#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num1, num2, total;
int count[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
unsigned int i;

int main(void)
{
	srand(time(NULL));

	for (i = 0; i < 36000; i++)
	{
		num1 = rand() % 6 + 1;
		num2 = rand() % 6 + 1;
		total = num1 + num2;
		count[total]++;
	}

	for (i = 2; i < 13; i++)
	{
		printf("%d ¡G%d\n",i,count[i]);
	}
	
	system("pause");
	return 0;
}