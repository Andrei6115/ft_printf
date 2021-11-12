/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:32:15 by calecia           #+#    #+#             */
/*   Updated: 2021/11/11 22:29:56 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_len(unsigned long num)
{
	int	count;

	count = 1;
	while (num > 15)
	{
		num /= 16;
		count++;
	}
	return (count);
}

int	print_point(unsigned long num)
{
	int		size;
	char	*temp;

	size = hex_len(num);
	temp = malloc(size + 3);
	temp[size + 2] = '\0';
	temp[0] = '0';
	temp[1] = 'x';
	while (num > 0)
	{
		size--;
		if (num % 16 >= 10 && num % 16 <= 15)
			temp[size + 2] = 'a' + num % 16 - 10;
		if (num % 16 < 10)
			temp[size + 2] = '0' + num % 16;
		num /= 16;
	}
	return (print_str(temp));
}
