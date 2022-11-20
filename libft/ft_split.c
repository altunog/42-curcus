/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaltun <oaltun@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:29:34 by oaltun            #+#    #+#             */
/*   Updated: 2022/11/20 10:29:35 by oaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;
	
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	*ft_free_str_arr(char **s_arr, size_t size)
{
	while (size--)
		free(s_arr[size]);
	free(s_arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	*word;
	size_t	count;
	size_t	i;

	count = count_words(s, c);
	words = (char **)malloc((count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (*s && count--)
	{
		while (*s && *s == c)
			s++;
		word = ft_substr(s, 0, ft_wordlen(s, c));
		if (!word)
			return (ft_free_str_arr(words, i));
		words[i++] = word;
		s += ft_wordlen(s, c);
	}
	words[i] = 0;
	return words;
}
