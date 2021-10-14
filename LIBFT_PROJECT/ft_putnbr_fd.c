/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcreely <xcreely@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:59:40 by xcreely           #+#    #+#             */
/*   Updated: 2021/10/13 16:54:32 by xcreely          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int)n;
	if (nb != 0)
	{
		ft_putstr_fd(ft_itoa(nb), fd);
	}
	else
	{
		ft_putstr_fd("0", fd);
	}
}
