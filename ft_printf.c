/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:11:17 by calecia           #+#    #+#             */
/*   Updated: 2021/11/11 22:30:22 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	flags(const char *s, va_list args)
{
	if (*s == 'c')
		return (print_char(va_arg(args, int)));
	else if (*s == 's')
		return (print_str(va_arg(args, char *)));
	else if (*s == 'i' || *s == 'd')
		return (print_int10(va_arg(args, int)));
	else if (*s == 'u')
		return (print_uint10(va_arg(args, unsigned int)));
	else if (*s == 'x')
		return (print_hexl(va_arg(args, unsigned int)));
	else if (*s == 'X')
		return (print_hexu(va_arg(args, unsigned int)));
	else if (*s == '%')
		return (print_char('%'));
	else if (*s == 'p')
		return (print_point(va_arg(args, unsigned long)));
	else return (0);
}

int	proc(const char *s, va_list args)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += flags(s, args);
		}
		else print_char(*s);
		s++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count_symbol;

	va_start(args, s);
	count_symbol = proc(s, args);
	va_end(args);
	return (count_symbol);
}
