/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:55:08 by lgiirre           #+#    #+#             */
/*   Updated: 2021/09/11 16:51:00 by lgiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = -1;
	if (!dstsize)
		return (lensrc);
	if (lendst > dstsize)
		lensrc += dstsize;
	else
		lensrc += lendst;
	while (src[++i] != '\0' && lendst < dstsize - 1)
		dst[lendst++] = src[i];
	dst[lendst] = '\0';
	return (lensrc);
}
