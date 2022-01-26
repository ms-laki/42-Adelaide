/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:52:21 by lgiirre           #+#    #+#             */
/*   Updated: 2021/11/05 15:03:49 by lgiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*destin;
	size_t	n;

	source = (char *)src;
	destin = (char *)dst;
	n = 0;
	if (source < destin)
	{
		while (n++ <= len)
			destin[len - n] = source[len - n];
	}
	else
		while (len--)
			*(destin++) = *(source++);
	return (dst);
}
