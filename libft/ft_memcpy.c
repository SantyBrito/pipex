/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:18:50 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 20:03:13 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*char_dest;
	const char	*char_src;
	size_t		i;

	char_dest = (char *) dest;
	char_src = (const char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/* Copies n bytes from memory area src to memory area dst.
You can choos the block of memorie frtom source and peist it on dest.
If dst and src overlap, behavior is unde-fined.
Applications in which dst and src might overlap 
should use memmove(3) instead.

int	main ()
{
	char	src[] = "Copy cat this text";
	char	dest[100];

	char	*dest_ptr = ft_memcpy (dest, src, ft_strlen(src) +1);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);
	printf("dest: %p\n", dest);
}
*/