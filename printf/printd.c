/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:40:00 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/03 14:02:07 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	printd(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		printc('-');
		printc('2');
		nb = nb + 2000000000;
		nb = nb * -1;
		len = len + 2;
	}
	if (nb < 0)
	{
		printc('-');
		nb = nb * -1;
		len++;
	}
	if (nb > 9)
		len = len + printd(nb / 10);
	printc(nb % 10 + 48);
	return (++len);
}
