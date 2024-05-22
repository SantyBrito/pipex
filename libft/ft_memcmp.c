/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:30:51 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:31:27 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned const char	*ptr1;
	unsigned const char	*ptr2;

	i = 0;
	ptr1 = (unsigned const char *)str1;
	ptr2 = (unsigned const char *)str2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* Compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.

int main()
{
    char s1[] = "Hola";
    char s2[] = "Hola";
    int ret;
    int ret2;

    ret = ft_memcmp(s1, s2, 5);
    printf("%d\n", ret);

    ret2 = memcmp(s1, s2, 5);
    printf("%d\n", ret2);
}
*/