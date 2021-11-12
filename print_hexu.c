/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:32:15 by calecia           #+#    #+#             */
/*   Updated: 2021/11/11 22:15:42 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_len(unsigned int num)
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

int	print_hexu(unsigned int num)
{
	int		size;
	char	*temp;

	size = hex_len(num);
	temp = malloc(size + 1);
	temp[size] = '\0';
	while (num > 0)
	{
		size--;
		if (num % 16 >= 10 && num % 16 <= 15)
			temp[size] = 'A' + num % 16 - 10;
		if (num % 16 < 10)
			temp[size] = '0' + num % 16;
		num /= 16;
	}
	return (print_str(temp));
}
