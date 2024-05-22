/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:28:22 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:28:56 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr;

	i = 0;
	ptr = (const char *)s;
	while (i < n)
	{
		if (ptr[i] == (char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/* Locates the first occurrence of c
(converted to an unsigned char) in string s.

int main()
{
	char s[] = "Santiago";
	//char find = "";
	size_t size = 8;
	char *rez;
	char *rez2;

	rez = ft_memchr(s, 'S', size);
	printf("%s\n", rez);
	rez2 = memchr(s, 'S', size);
	printf("%s\n", rez2);
}
*/