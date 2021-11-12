/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:09:16 by calecia           #+#    #+#             */
/*   Updated: 2021/11/11 22:19:06 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (print_str("(null)"));
	while (*s)
	{
		write(1, s, 1);
		count++;
		s++;
	}
	return (count);
}
