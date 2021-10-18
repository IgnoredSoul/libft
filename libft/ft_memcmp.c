/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:08 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/08 15:59:09 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;

	if (n == 0)
		return (0);
	s1_cp = (unsigned char *)s1;
	s2_cp = (unsigned char *)s2;
	while (n--)
	{
		if (*s1_cp != *s2_cp)
			return (*s1_cp - *s2_cp);
		s1_cp++;
		s2_cp++;
	}
	return (0);
}
