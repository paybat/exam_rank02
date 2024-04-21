#include <stdlib.h>
#include<stdio.h>

int main(int ac,char *av[])
{
	int a;
	int b;

	if(ac == 4)
	{
		a = atoi(av[1]);
		b = atoi(av[3]);
		if(*av[2] == '+')
			printf("%d", a + b);
		else if(*av[2] == '-')
			printf("%d", a - b);
		else if(*av[2] == '*')
			printf("%d", a * b);
		else if(*av[2] == '/' && b != 0)
			printf("%d", a / b);
		else if(*av[2] == '%')
			printf("%d", a % b);
	}
	printf("\n");
}