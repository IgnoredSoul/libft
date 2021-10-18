#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_str;
	const unsigned char	*s_str;

	d_str = (unsigned char *)dest;
	s_str = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return ((void *)dest);
	while (n > 0)
	{
		*d_str++ = *s_str++;
		n--;
	}
	return ((void *)dest);
}
