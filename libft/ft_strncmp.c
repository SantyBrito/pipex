/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:26:10 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:27:10 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] && i < n -1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/* Lexicographically compare the null-terminated strings s1 and s2.

The strncmp() function compares not more than n characters.
Because strncmp() is designed for comparing strings rather than binary data,
characters that appear after a `\0' character are not compared.

int main()
{
	char str1[255] = "Hello Z";
	char str2[255] = "Hello A";
	int size = 7;
	printf("ft function %d\n", ft_strncmp(str1, str2, size));
	printf("Normal function %d\n", strncmp(str1, str2, size));
}
*/