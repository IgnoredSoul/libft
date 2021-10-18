#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cp;

	s_cp = (const unsigned char *)s;
	c = (unsigned char)c;
	while (n > 0)
	{
		if (*s_cp == c)
			return ((void *)s_cp);
		s_cp++;
		n--;
	}
	return (NULL);
}
