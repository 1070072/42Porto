
#include <unistd.h>

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		n = n * -1;
		write(1, "-", 1);
	}
	if (n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		write(1, &"0123456789"[n], 1);
}

int	main()
{
	ft_putnbr(-2147483648);
}