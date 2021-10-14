/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:18 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/08 15:59:19 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d_str;
	const char	*s_str;

	d_str = (char *)dest;
	s_str = (const char *)src;
	if (d_str == s_str || len == 0)
		return (dest);
	else if (d_str < s_str || d_str > s_str + len)
		return (ft_memcpy(dest, src, len));
	else
	{
		d_str += len;
		s_str += len;
		while (len > 0)
		{
			*--d_str = *--s_str;
			len--;
		}
		return (dest);
	}
}
