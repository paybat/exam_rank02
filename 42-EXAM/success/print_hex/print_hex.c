
#include <unistd.h>
#include <stdio.h>

int 	ft_atoi(char *s)
{
	int	i;
	int	sin;
	int res;

	i = 0;
	sin = 1;
	res = 0;
	while(s[i] && s[i] == ' ')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if(s[i] == '-')
			sin *= -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		res *= 10;
		res = res + (s[i] - '0');
		i++;
	}
	return(res * sin);
}
void ft_hex(int n)
{
	char s[] ="0123456789abcdef";

	if (n > 16)
	{
		ft_hex(n / 16);
		write(1, &s[n % 16], 1);

	}
	else
		write(1, &s[n], 1);
}
int main(int ac, char *av[])
{
	if(ac == 2)
	{
		ft_hex(ft_atoi(av[1]));
	}
	write(1,"\n", 1);
}