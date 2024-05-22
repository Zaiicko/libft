/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaiicko <meskrabe@student.s19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 22:25:52 by zaiicko           #+#    #+#             */
/*   Updated: 2024/04/21 00:37:22 by zaiicko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	next_word(char const *str, char c, int i)
{
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

static int	next_sep(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
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

char	**ft_split(char const *str, char c)
{
	char	**strs;
	int		word_count;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	word_count = ft_word_count(str, c);
	strs = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count)
	{
		i = next_word(str, c, i);
		strs[j] = ft_substr(str, i, next_sep(str, c, i) - i);
		if (!strs[j])
			return (ft_free_tab(strs));
		i = next_sep(str, c, i);
		j++;
	}
	strs[j] = NULL;
	return (strs);
}
