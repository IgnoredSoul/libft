#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str_cp;

	str_cp = (unsigned char *)b;
	while (len > 0)
	{
		*str_cp = (unsigned int)c;
		str_cp++;
		len--;
	}
	return (b);
}
