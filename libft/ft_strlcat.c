/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:01:33 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/20 11:21:12 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	res;
	size_t	i;

	res = 0;
	ls = ft_strlen(src);
	if (dstsize == 0)
		return (ls);
	ld = ft_strlen(dst);
	if (dstsize <= ld)
		return (ls + dstsize);
	res = ls + ld;
	i = 0;
	while (src[i] && (ld + 1) < dstsize)
	{
		dst[ld] = src[i];
		ld++;
		i++;
	}
	dst[ld] = '\0';
	return (res);
}
