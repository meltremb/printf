/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:35:57 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/03 14:18:07 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	printp(unsigned long long nb)
{
	char			*base;
	unsigned long	len;

	base = "0123456789abcdef";
	len = 0;
	if (nb >= 16)
		len = printp(nb / 16);
	nb = base[nb % 16];
	write (1, &nb, 1);
	return (++len);
}
