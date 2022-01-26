/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:27:04 by lgiirre           #+#    #+#             */
/*   Updated: 2021/11/05 18:01:21 by lgiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		track;
	int		final;
	char	*output;

	output = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (output == NULL)
		return (NULL);
	track = 0;
	final = 0;
	while (s1[track] != '\0')
	{
		output[track] = s1[track];
		track++;
	}
	while (s2[final] != '\0')
	{
		output[track + final] = s2[final];
		final++;
	}
	output[track + final] = '\0';
	return (output);
}
