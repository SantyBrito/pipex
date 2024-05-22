/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:07:29 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 20:06:56 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	s = str;
}

/* Writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

int	main ()
{
	char	str[] = "almost every programmer should know bzero!";
	ft_bzero	(str+8,9);
	puts (str);

	bzero (str+8, 9);
	printf ("%s\n", str);
	return 0;
}
*/