/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiirre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:23:17 by lgiirre           #+#    #+#             */
/*   Updated: 2021/11/05 15:06:11 by lgiirre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	absolute(int nbr)
{
	if (nbr < 0)
	{
		return (-nbr);
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_nbrlen(n);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = absolute(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
