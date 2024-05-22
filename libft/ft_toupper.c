/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:55:05 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/18 20:58:52 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* Converts a lower-case letter to the corresponding upper-case letter.

int main()
{
	char chr = 'a';
	char chr2 = 'z';

	printf("%c\n", ft_toupper(chr));
	printf("%c\n", ft_toupper(chr2));
}
*/