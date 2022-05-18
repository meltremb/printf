/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printmajx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:25:34 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/03 14:07:32 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	printmajx(unsigned int nb)
{
	char	*base;
	int		len;

	base = "0123456789ABCDEF";
	len = 0;
	if (nb >= 16)
		len = len + printmajx(nb / 16);
	nb = base[nb % 16];
	write (1, &nb, 1);
	return (++len);
}
