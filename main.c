/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 00:01:04 by amsoltan          #+#    #+#             */
/*   Updated: 2024/06/03 00:01:04 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	count;

	count = ft_printf("Hello %s\n", "John");
	printf("%d chars\n", count);
	count = ft_printf("Char-> %c\n", 'a');
	printf("%d chars\n", count);
	count = ft_printf("Nbr-> %d\n", -42);
	printf("%d chars\n", count);
	count = ft_printf("Lowercase Hex-> %x\n", -1);
	printf("%d chars\n", count);
	count = ft_printf("Uppercase Hex-> %X\n", -1);
	printf("%d chars\n", count);
	count = ft_printf("Percentage-> %%\n", -1);
	printf("%d chars\n", count);
	count = ft_printf("Pointer-> %p\n", (void *)0x123456);
	printf("%d chars\n", count);
}
