/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:57:11 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/03 14:07:58 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	printminx(unsigned int nb)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (nb >= 16)
		len = len + printminx(nb / 16);
	nb = base[nb % 16];
	write (1, &nb, 1);
	return (++len);
}
