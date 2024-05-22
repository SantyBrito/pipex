/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:41:48 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 20:38:52 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*casted_dst;
	char	*casted_src;

	casted_dst = (char *)dst;
	casted_src = (char *)src;
	if (len == 0 || (!casted_dst && !casted_src))
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			casted_dst[len] = casted_src[len];
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}

/* Copies len bytes from string src to string dst.
The two strings may overlap; the copy is always
done in a non-destructive manner.

if src < dst copy from back to front, otherwise use ft_memcpy

int	main ()
{
	char	src[] = "Copy this text";
	char	dest[100];

	char	*dest_ptr = ft_memmove (dest, src, strlen(src) +1);

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("dest_ptr: %p\n", dest_ptr);
	printf("dest: %p\n", dest);
}
*/