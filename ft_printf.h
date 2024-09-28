/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 00:05:36 by amsoltan          #+#    #+#             */
/*   Updated: 2024/06/03 00:05:36 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_printf(const char *format, ...);
int	print_char(int c);
int	print_string(char *s);
int	print_digit(long int n, int base, int caps);
int	search_format(char format, va_list subs);
int	print_percent(void);
