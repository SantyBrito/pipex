/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:20:26 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 20:03:49 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) str;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (str = ptr);
}

/* Writes len bytes of value c (converted to an unsigned char) to the string b.

int	main ()
{
	char	str[] = "almost every programmer should know memset!";
	ft_memset	(str,'-',6);
	puts (str);

	memset (str,'-',6);
	puts (str);
	return 0;
}
*/