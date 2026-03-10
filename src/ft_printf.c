/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merdal <merdal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:17:59 by merdal            #+#    #+#             */
/*   Updated: 2023/11/27 12:50:15 by merdal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(const char *input, va_list args)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_print_char(va_arg(args, int));
	else if (*input == 'd' || *input == 'i')
		i += ft_print_int(va_arg(args, int));
	else if (*input == 's')
		i += ft_print_str(va_arg(args, char *));
	else if (*input == 'u')
		i += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*input == 'x')
		i += ft_print_x_hex(va_arg(args, unsigned int));
	else if (*input == 'X')
		i += ft_print_xx_hex(va_arg(args, unsigned int));
	else if (*input == 'p')
		i += ft_print_ptr(va_arg(args, unsigned long long));
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			if (*input == '%')
				i += ft_print_char('%');
			else
				i += ft_check_type(input, args);
		}
		else
		{
			i += ft_print_char(*input);
		}
		input++;
	}
	va_end(args);
	return (i);
}
