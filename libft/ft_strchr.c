/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:59:01 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/19 18:14:16 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int cc)
{
	const char		*s;
	unsigned char	c;

	s = str;
	c = (unsigned char)cc;
	while (*s != '\0' || *s == c)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	s = NULL;
	return ((char *)(s));
}
