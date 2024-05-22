/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:54:04 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/15 20:03:31 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/* It checks the input of char and compares it
in ASCII to return a non-zero int when alphabetic char is passed.

int	main()
{
	char	c;
	int		result;

	printf("First is ft_isalpha results\n");
	c = '5';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = ft_isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isalpha results\n");
	c = '5';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'Q';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = 'l';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	c = '+';
	result = isalpha(c);
	printf("When %c is passed, return value is %d\n", c, result);
	return 0;
} */