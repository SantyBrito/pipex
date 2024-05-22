/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:24:24 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/15 20:03:53 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* Tests if a given character can be represented as a
valid ASCII character set. Otherwise, it returns 0.


int	main(void)
{
	char	c;
	int	result;

	printf("First is ft_isascii results\n");
	c = '5';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isascii results\n");
	c = '5';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = isascii(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return (0);
}
*/