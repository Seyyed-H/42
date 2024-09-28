/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:35:16 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/19 17:09:07 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int co, size_t n)
{
	unsigned char	*s;
	unsigned char	c;
	size_t			i;

	s = (unsigned char *)str;
	c = (unsigned char)co;
	i = -1;
	while (++i < n)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
