/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <xcreely@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:00:32 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/13 16:37:40 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*str;

	if (!dest || !src)
		return (0);
	str = src;
	if (size != 0)
	{
		while (*str != '\0' && --size)
			*dest++ = *str++;
		*dest = '\0';
	}
	while (*str != '\0')
		str++;
	return (str - src);
}
