/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:47:06 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/20 11:37:50 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		z = 0;
		j = i;
		if (haystack[i] == needle[0])
		{
			while (needle[z] && haystack[j] == needle[z] && j < len)
			{
				j++;
				z++;
			}
			if (needle[z] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
