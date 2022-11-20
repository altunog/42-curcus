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
#include <stdio.h>
size_t	count_words(char const *s, char c)
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

size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;
	
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}


void	ft_free_str_arr(char **s_arr, size_t size)
{
	while (size--)
		free(s_arr[size]);
	free(s_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	// char	*word;
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
		// word = ft_substr(s, 0, ft_wordlen(s, c));
		if (!(words[i] = ft_substr(s, 0, ft_wordlen(s, c))))
		{
			ft_free_str_arr(words, i);
			return (NULL);
		}
		// words[i] = word;
		i++;
		s += ft_wordlen(s, c);
	}
	words[i] = 0;
	return words;
}


int main() {
	char *s = "  red  fox  quick jump  over lazy dog ";
	char d = ' ';
	char **l;
	int i = 0;

	l = ft_split(s, d);
	if (!l)
		printf("NULL\n");
	while (l[i]) {
		printf("l[%d]: %s\n", i, l[i]);
		i++;
	}
	
}