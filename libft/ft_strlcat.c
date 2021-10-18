#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	unsigned int	i;
	unsigned int	b;

	if (dest_size <= ft_strlen(dest))
		return (dest_size + ft_strlen(src));
	b = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && b + 1 < dest_size)
	{
		dest[b] = src[i];
		b++;
		i++;
	}
	dest[b] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
