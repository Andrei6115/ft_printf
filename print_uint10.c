/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   priny_uint10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:34:29 by calecia           #+#    #+#             */
/*   Updated: 2021/11/11 19:49:48 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	sizenum(int n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*ft_itoa(unsigned int n)
{
	char	*ret;
	int		size;

	size = sizenum(n);
	ret = malloc(size + 1);
	if (!ret)
		return (0);
	ret[size] = '\0';
	if (n == 0)
		ret[0] = '0';
	while (n > 0)
	{
		ret[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (ret);
}

int	print_uint10(unsigned int num)
{
	int		size;
	char	*str;

	str = ft_itoa(num);
	size = print_str(str);
	free(str);
	return (size);
}
