/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsoltan <amsoltan@student.42adel.org.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:45:53 by amsoltan          #+#    #+#             */
/*   Updated: 2024/03/19 15:34:22 by amsoltan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*comb;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	comb = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!comb)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		comb[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		comb[i + j] = s2[j];
		j++;
	}
	comb[i + j] = '\0';
	return (comb);
}
