/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:54:54 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/08 15:54:56 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
