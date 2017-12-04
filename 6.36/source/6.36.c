#include <stdio.h>
#include <stdlib.h>
#define arraysize 10

char data[arraysize] = { 'a', 'b', 'c', 'd', 'e','f','g','h','i','j'};
int i=0;
void stringReverse(char *data_rever);

int main(void)
{
	stringReverse(&data);
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(char *data_rever)
{
	if (i < arraysize/2)
	{
		char hold = data_rever[i];
		data_rever[i] = data_rever[(arraysize - 1) - i];
		data_rever[(arraysize - 1) - i] = hold;
	}
	
	printf(" %c", data_rever[i]);
	i++;	
	if (data_rever[i] != '\0')
	{
		stringReverse(&data);
	}
}