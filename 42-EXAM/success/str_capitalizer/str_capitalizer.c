#include<unistd.h>

int main(int ac, char *av[])
{
	if(ac >= 2)
	{
		int i;
		int j;
		i = 1;
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				if(av[i][j] >= 'A' && av[i][j] <= 'Z')
					av[i][j] += 32;
					j++;
			}
			i++;
		}
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				if((av[i][0] >= 'a' && av[i][0] <= 'z'))
				{
					av[i][0] -= 32;
					write(1, &av[i][0], 1);
				}
				else if(av[i][j] == ' ' && (av[i][j + 1] >= 'a' && av[i][j + 1] <= 'z'))
				{
					write(1, &av[i][j], 1);
					av[i][j + 1] -= 32;
					write(1, &av[i][j + 1], 1);
					j++;
				}
				else
					write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		
	}
	else
		write(1, "\n", 1);

}