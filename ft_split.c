/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:25:52 by zaiicko           #+#    #+#             */
/*   Updated: 2024/04/01 01:46:24 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static	size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

static void	ft_create_tab(char **strs, const char *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			strs[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	strs[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**strs;

	i = 0;
	word_count = ft_word_count(s, c);
	strs = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	ft_create_tab(strs, s, c);
	while (strs[i])
	{
		if (!strs[i])
		{
			ft_free_tab(strs);
			return (NULL);
		}
		i++;
	}
	return (strs);
}
