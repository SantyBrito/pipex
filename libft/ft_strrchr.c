/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:21:24 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:22:17 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)c)
			return ((char *)&string[i]);
		i--;
	}
	return (0);
}

/* Identical to strchr(), except it locates the last occurrence of c.

int main () 
{
   const char str[] = "This is just a String"; 
   const char ch = 'j'; 
   printf("%s\n", strrchr(str, ch));
   printf("%s\n", ft_strrchr(str, ch));
}
*/