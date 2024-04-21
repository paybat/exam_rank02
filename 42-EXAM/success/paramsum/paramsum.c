#include <unistd.h>

void	print_nbr(int nb)
{
	if (nb > 9)
	{
		print_nbr(nb/10);
		print_nbr(nb%10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}
int main(int ac, char *av[])
{
	(void)av;

	if(ac > 1)
	{
		print_nbr(ac -1);
	}
	else
		print_nbr(0);
	write(1, "\n", 1);
}