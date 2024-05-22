/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 20:30:23 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/24 18:37:57 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_wrds(char const *s, char c)
{
	int	count;
	int	i;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	arr = (char **)ft_calloc(sizeof(char *), (nbr_wrds(s, c) + 1));
	if (!arr || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start != i)
		{
			arr[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	return (arr);
}

// int	main()
// {
// 	char ptr[6][10] = {"Enero", "Febrero", "Marzo"};
// }
//
// nbr_wrds: Is a function that counts the
// number of words to reserve the space.
// char = letter - * = word - ** = sentence
// (more than one word (two dimentional))