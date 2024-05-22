/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:03:33 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:04:51 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/* Locates the first occurrence of c 
(converted to a char) in the string pointed to by s.
The terminating null character is considered to be part 
of the string; therefore if c is `\0',
the functions locate the terminating `\0'.

int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'j'; 
   printf("%s\n", strchr(str, ch));
   printf("%s\n", ft_strchr(str, ch));
}
*/