#include <stdlib.h>


int 	nbr_lent(int n)
{
	int	i;

	i = 0;
	while(n > 0)
	{
		n /= 10;
		i++;
	}
	return(i);
}
int	str_lent(char *s)
{
	int i = 0;

	while(s[i])
		i++;
	return(i);
}
void	ft_rev(char *s)
{
	int l;
	int lx;
	int i;
	char swp;

	i = 0;
	l = str_lent(s);
	lx = l --;
	while(i < (lx / 2))
	{
		swp = s[i];
		s[i] = s[l];
		s[l] = swp;
		i++;
		l--;
	}

}
char	*ft_itoa(int nbr)
{
	char	*s;
	int		len;
	int		i;

	if (nbr == 0)
	{
		s = malloc(2 * sizeof(char));
		s[0] = '0';
		s[1] = '\0';
		return(s);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		len = nbr_lent(nbr);
		s = (void *)malloc((len + 2) * sizeof(char));
		s[len] = '-';
		i = 0;

	}
	else
	{
		len = nbr_lent(nbr);
		s = (void *)malloc((len + 1) * sizeof(char));
		i = 0;
	}
	
	while (nbr > 0 && i < len)
	{
		s[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	s[len + 1] = '\0';
	ft_rev(s);
	return(s);
}

