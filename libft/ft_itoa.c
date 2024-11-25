/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:28:58 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/16 12:57:24 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	special_case(int *n, char *result, int *i)
{
	result[0] = '-';
	result[1] = '2';
	*n = 147483648;
	(*i)++;
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;

	len = count_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		i++;
	}
	if (n == -2147483648)
		special_case(&n, result, &i);
	while (len > i)
	{
		len--;
		result[len] = '0' + (n % 10);
		n /= 10;
	}
	return (result);
}
