/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:08:48 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/20 02:11:10 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t size)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len + 1 < size)
	{
		ft_memcpy(d, s, s_len + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(d, s, size - 1);
		d[size - 1] = '\0';
	}
	return (s_len);
}
