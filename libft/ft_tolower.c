/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:00:37 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 21:01:43 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* Converts an upper-case letter to the corresponding lower-case letter.

int main()
{
	char chr = 'A';
	char chr2 = 'Z';

	printf("%c\n", ft_tolower(chr));
	printf("%c\n", ft_tolower(chr2));
}
*/