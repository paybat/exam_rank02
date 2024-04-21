
#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

int main(int ac,char *av[])
{
	if(ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
	{
		while(*av[1])
		{
			if(*av[1] == *av[2])
				write(1, av[3], 1);
			else
				write(1, av[1], 1);
			av[1]++;
		}

	}
		write(1, "\n", 1);
}