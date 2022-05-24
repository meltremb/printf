/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:03:30 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/03 14:02:35 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	printu(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
		len = len + printu(nb / 10);
	printc(nb % 10 + 48);
	return (++len);
}
