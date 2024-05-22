/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:28:40 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/15 20:01:44 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* This funtion returns 1 if the argument is 
alphanumeric and returns 0 if the argument is not.


int	main()
{
	char c;
	int result;

	printf("First is ft_isalnum results\n");

	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	printf("Now is isalnum results\n");

	c = '5';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	return 0;
}
 */