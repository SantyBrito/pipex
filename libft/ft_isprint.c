/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:43:08 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/15 20:04:04 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* If the character passed is a printable character,
it returns non-zero integer, if not it returns 0.

int	main(void)
{
	char	c;
	int	result;

	printf("First is ft_isprint results\n");
	c = '5';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isprint results\n");
	c = '5';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = isprint(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return (0);
}
*/
