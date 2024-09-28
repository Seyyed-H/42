/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 02:47:52 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/16 17:57:44 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	i = -1;
	dest_ptr = dest;
	src_ptr = src;
	if (dest_ptr < src_ptr)
	{
		while (++i < n)
		{
			dest_ptr[i] = src_ptr[i];
		}
	}
	else if (dest_ptr > src_ptr)
	{
		while (n > 0)
		{
			n--;
			dest_ptr[n] = src_ptr[n];
		}
	}
	return (dest);
}
