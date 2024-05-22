/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:26:07 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 20:37:37 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
	}
	if (dstsize == 0)
		return (i);
	while (src[j] && j < (dstsize - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

/* Copy and concatenate strings with the same
input parameters and output result as snprintf(3).

int main ()
{
	char dest[34] = ".";
	char dest2[34] = ".";
	char src[] = "Lenght of the full string is 31";
	size_t size = 5;

	printf("My function result: %lu %s\n", ft_strlcpy(dest, src, size), dest);
	size_t c = strlcpy(dest2, src, size);
	printf("Real function result: %ld %s\n", c, dest2);
}
*/