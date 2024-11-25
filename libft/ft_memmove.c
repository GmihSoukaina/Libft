/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:49:42 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/19 08:49:47 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*_dst;
	const unsigned char	*_src;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	_dst = (unsigned char *) dst;
	_src = (const unsigned char *) src;
	if (_dst < _src)
	{
		ft_memcpy(dst, src, n);
	}
	else if (_dst > _src)
	{
		i = n;
		while (i > 0)
		{
			_dst[i - 1] = _src[i - 1];
			i--;
		}
	}
	return (dst);
}
