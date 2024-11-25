/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:38:57 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/18 10:50:31 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	is_word;
	int	word_count;

	is_word = 0;
	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_word = 0;
		else if (!is_word && s[i] != c)
		{
			is_word = 1;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

static void	**ft_free(char **arr, size_t count)
{
	size_t	j;

	j = 0;
	while (j < count)
	{
		free (arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}

static char	**ft_fill_arr(char **arr, char c, char const	*s)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	count;
	size_t	end;

	i = 0;
	j = 0;
	count = count_word(s, c);
	while (j < count)
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i - 1;
		arr[j] = ft_substr(s, start, (end - start) + 1);
		if (!arr[j])
			return (ft_free(arr, j), NULL);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	count;

	if (s == NULL)
		return (NULL);
	count = count_word(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = ft_fill_arr(arr, c, s);
	return (arr);
}
