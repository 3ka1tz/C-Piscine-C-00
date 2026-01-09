#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int	main(void)
{
	write(1, "ft_is_negative(-1) = ", 21);
	ft_is_negative(-1);
	write(1, "\n", 1);
	write(1, "ft_is_negative(0)  = ", 21);
	ft_is_negative(0);
	write(1, "\n", 1);
	write(1, "ft_is_negative(1)  = ", 21);
	ft_is_negative(1);
	write(1, "\n", 1);
	write(1, "ft_is_negative(+1) = ", 21);
	ft_is_negative(+1);
	write(1, "\n", 1);
}
*/
