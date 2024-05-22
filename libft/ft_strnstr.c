/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:33:10 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:34:21 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == 0)
		return ((char *)haystack);
	while ((haystack[i] != 0) && ((i + needle_len) <= len))
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/* Locates the first occurrence of the null-terminated 
string needle in the string haystack, where not
more than len characters are searched.
Characters that appear after a `\0' character
are not searched. 
"Since the strnstr() function is a FreeBSD specific API,
it should only be used when portability is not a concern."

int main() 
{
	char str[25] = "Damn You Man"; 
	char ch[255] = "You"; 
	size_t size = 8;

	printf("%s\n", strnstr(str, ch, size));
	printf("%s\n", ft_strnstr(str, ch, size));
}
*/