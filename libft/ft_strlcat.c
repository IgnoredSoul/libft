/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:56:28 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/08 15:56:29 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
