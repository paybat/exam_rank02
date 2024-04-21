#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while((s[i] != ' ' && s[i] != '\t') && s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
int	ft_countwrd(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if(str[i])
			c++;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
			i++;
	}
	return(c);
}
int main(int ac, char *av[])
{
	int c_words;
	char *tmp;

	if (ac == 2)
	{
		tmp = av[1];
		c_words = ft_countwrd(tmp);
		while (*tmp)
			tmp++;
		tmp--;
		while(c_words)
		{
			while ((*tmp == ' ' || *tmp == '\t') && tmp != av[1])
				tmp--;
			while ((*tmp != ' ' && *tmp != '\t') && tmp != av[1])
				tmp--;
			if (tmp == av[1])
				ft_putstr(tmp);
			else
				ft_putstr(tmp + 1);
			if(c_words - 1)
				write(1, " ", 1);
			c_words--;
		}
	}
	write(1, "\n", 1);
	return (0);
}