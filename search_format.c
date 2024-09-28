/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 00:09:38 by amsoltan          #+#    #+#             */
/*   Updated: 2024/06/03 00:09:38 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *s)
{
	int	char_count;

	char_count = 0;
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
		char_count++;
	}
	return (char_count);
}

int	print_digit(long int n, int base, int caps)
{
	int		char_count;
	char	*dec_hex_numbs;

	char_count = 0;
	if (caps == 0)
		dec_hex_numbs = "0123456789abcdef";
	else if (caps == 1)
		dec_hex_numbs = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base, caps) + 1);
	}
	else if (n < base)
	{
		return (print_char(dec_hex_numbs[n]));
	}
	else
	{
		char_count = print_digit((n / base), base, caps);
		return (print_digit((n % base), base, caps) + char_count);
	}
}

int	print_pointer(unsigned long p)
{
	write(1, "0x", 2);
	return (print_digit(p, 16, 0) + 2);
}

int	print_percent(void)
{
	write(1, "%%", 1);
	return (1);
}
