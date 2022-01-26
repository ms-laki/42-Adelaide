/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:40:57 by lgiirre           #+#    #+#             */
/*   Updated: 2021/09/09 17:42:05 by lgiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	track;

	track = 0;
	while (s[track])
	{
		if (s[track] == c)
			return ((char *)s + track);
		track++;
	}
	if (s[track] == '\0' && c == '\0')
		return ((char *)s + track);
	return (NULL);
}
