/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:37:09 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/19 00:57:09 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t size)
{
	char			*dest;
	const char		*src;
	size_t			i;
	size_t			j;

	dest = d;
	src = s;
	i = ft_strlen(dest);
	j = -1;
	while (src[++j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	if (ft_strlen(dest) > size)
	{
		return (size + ft_strlen(src));
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char a[20] = "hello ";
	char b[] = "bonjour";
	printf("%d", ft_strlcat(a,b,2));
	printf("%s", a);
	return 0;
}
*/