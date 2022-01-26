/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:51:56 by lgiirre           #+#    #+#             */
/*   Updated: 2021/11/05 14:35:16 by lgiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destin;
	char	*source;

	destin = (char *)dst;
	source = (char *)src;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
		*(destin++) = *(source++);
	return (dst);
}
