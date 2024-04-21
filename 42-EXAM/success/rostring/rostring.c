#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;
	int flg;

	i = 0;
	while (str[i])
	{
		flg = 0;
		while (str[i] && (str[i] == ' ' || str[i] == '	'))
		{
			flg = 1;
				i++;
		}
		if(!str[i])
			break ;
		if (flg)
			write(1, " ", 1);
		write(1, &str[i], 1);
		i++;
	}
	
}

int count_wrd(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str[i])
	{
		while((str[i] == ' ' || str[i] == '	') && str[i])
			i++;
		if (str[i])
			c++;
		while(!(str[i] == ' ' || str[i] == '	') && str[i])
			i++;
		
	}
	return(c);
}

void	put_str(char *str)
{
	int 	i;

	i = 0;
	while (str[i] && !(str[i] == ' ' || str[i] == '	'))
	{
		write(1, &str[i], 1);
		i++;
	}

}
int main(int ac, char **av)
{
	int flag;
	char	*p;
	int		c;

	flag = 0;
	if (ac > 1)
	{
		c = count_wrd(av[1]);
		//printf("%d\n", c);
		p = av[1];
		while(*av[1] && !flag)
		{
			while (*av[1] && !(*av[1] == ' ' || *av[1] == '	'))
			{
				flag = 1;
				av[1]++;
			}
			while (*av[1] && (*av[1] == ' ' || *av[1] == '	'))
				av[1]++;
			if(flag)
				break;
		}
		ft_putstr(av[1]);
		while (*p && (*p == ' ' || *p == '	'))
				p++;
		if(c > 1)
			write(1, " ", 1);
		put_str(p);

	}
	write(1, "\n", 1);
	return(0);
}