/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:58:36 by meltremb          #+#    #+#             */
/*   Updated: 2022/05/09 11:52:01 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *input, ...);
int	printc(char c);
int	prints(char *s);
int	printp(unsigned long long nb);
int	printd(int nb);
int	printi(int nb);
int	printu(unsigned int nb);
int	printminx(unsigned int nb);
int	printmajx(unsigned int nb);
int	printpercent(void);
int	canprintpls_uwu(char c);

#endif
