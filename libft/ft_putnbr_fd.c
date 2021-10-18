#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (nb != 0)
	{
		ft_putstr_fd(ft_itoa(nb), fd);
	}
	else
	{
		ft_putstr_fd("0", fd);
	}
}
