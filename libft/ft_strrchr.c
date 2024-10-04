/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:15:53 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/19 18:57:09 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int cc)
{
	const char		*s;
	size_t			s_len;
	unsigned char	c;

	s_len = ft_strlen((char *)str);
	s = str + s_len;
	c = (unsigned char)cc;
	while (s_len-- || *s == c)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	s = NULL;
	return ((char *)(s));
}
