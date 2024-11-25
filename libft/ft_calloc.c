/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:19:11 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/19 20:42:55 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*total_size;
	size_t			i;

	i = 0;
	if (count && size && (count * size) / count != size)
		return (NULL);
	total_size = malloc(count * size);
	if (!total_size)
		return (NULL);
	while (i < count * size)
	{
		total_size[i] = 0;
		i++;
	}
	return (total_size);
}
