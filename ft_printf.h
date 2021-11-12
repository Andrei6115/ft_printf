/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calecia <calecia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:14:26 by calecia           #+#    #+#             */
/*   Updated: 2021/11/11 22:24:50 by calecia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		print_char(char c);
int		print_str(char *s);
int		print_int10(int num);
int		print_uint10(unsigned int num);
int		print_hexl(unsigned int num);
int		print_hexu(unsigned int num);
int		print_point(unsigned long num);
int	    ft_printf(const char *s, ...);
#endif