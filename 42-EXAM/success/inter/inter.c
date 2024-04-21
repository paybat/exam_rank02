#include <unistd.h>

int	ft_exist(char c, char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}
int main(int ac, char *av[])
{
	int j;
	int i;
	int flg;

	if(ac == 3)
	{
		j = 0;
		while(av[1][j])
		{
			flg = 1;
			i = 0;
			if(!ft_exist(av[1][j], av[2]))
			{
				while(i < j)
				{
					if (av[1][i] == av[1][j])
						{
							flg = 0;
							break;
						}
					i++;
				}
				if(flg)
				write(1, &av[1][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}