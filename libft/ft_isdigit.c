/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:20:59 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/13 22:27:47 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* Tests for a decimal digit character.

int	main()
{
	char c;
	int result;

	printf("First is ft_isnumber results\n");

	c = '5';
	result = ft_isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = ft_isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = ft_isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = ft_isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isnumber results\n");

	c = '5';
	result = isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = isnumber(c);
	printf("When %c is passed, return value is %d\n", c, result);

	return 0;
}
*/