#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	neg_signs;

	res = 0;
	neg_signs = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg_signs *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * neg_signs);
}
