/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 00:07:18 by amsoltan          #+#    #+#             */
/*   Updated: 2024/06/03 00:07:18 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	search_format(char format, va_list subs)
{
	int	char_count;

	char_count = 0;
	if (format == 'c')
		char_count += print_char(va_arg(subs, int));
	else if (format == 's')
		char_count += print_string(va_arg(subs, char *));
	else if (format == 'u')
		char_count += print_digit((long)va_arg(subs, unsigned int), 10, 0);
	else if (format == 'i')
		char_count += print_digit((long)va_arg(subs, int), 10, 0);
	else if (format == 'x')
		char_count += print_digit((long)va_arg(subs, unsigned int), 16, 0);
	else if (format == 'X')
		char_count += print_digit((long)va_arg(subs, unsigned int), 16, 1);
	else if (format == '%')
		char_count += print_percent();
	else
		char_count += write(1, &format, 1);
	return (char_count);
}

int	ft_printf(const char *sentence, ...)
{
	int		char_count;
	va_list	subs;

	char_count = 0;
	va_start(subs, sentence);
	while (*sentence != '\0')
	{
		if (*sentence == '%')
			char_count += search_format(*(++sentence), subs);
		else
		{
			write(1, sentence, 1);
			char_count++;
		}
		sentence++;
	}
	va_end(subs);
	return (char_count);
}
