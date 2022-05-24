/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:56:31 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/09 12:27:57 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	print(char c, va_list bulbasaur)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = printc(va_arg(bulbasaur, int));
	else if (c == 's')
		len = prints(va_arg(bulbasaur, char *));
	else if (c == 'p')
	{
		write (1, "0x", 2);
		len = 2 + printp(va_arg(bulbasaur, unsigned long long));
	}
	else if (c == 'd')
		len = printd(va_arg(bulbasaur, long));
	else if (c == 'i')
		len = printi(va_arg(bulbasaur, long));
	else if (c == 'u')
		len = printu(va_arg(bulbasaur, unsigned int));
	else if (c == 'x')
		len = printminx(va_arg(bulbasaur, unsigned int));
	else if (c == 'X')
		len = printmajx(va_arg(bulbasaur, unsigned int));
	else if (c == '%')
		len = printpercent();
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	bulbasaur;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(bulbasaur, input);
	while (input[i])
	{
		if (input[i] != '%')
			len = len + printc(input[i]);
		else
			if (canprintpls_uwu(input[i + 1]))
				len = len + print(input[i++ + 1], bulbasaur);
		i++;
	}
	va_end(bulbasaur);
	return (len);
}
