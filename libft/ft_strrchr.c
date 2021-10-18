/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:56:58 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/08 15:56:59 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	size_t	len;

	len = ft_strlen(s1);
	if (c == '\0')
		return ((char *)s1 + len);
	while (len-- > 0)
		if (s1[len] == (char)c)
			return ((char *)s1 + len);
	return (NULL);
}
