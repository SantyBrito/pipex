/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbrito <sbrito@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:32:11 by sbrito            #+#    #+#             */
/*   Updated: 2023/11/24 17:34:03 by sbrito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;

	n2 = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n2 = -n2;
	}
	if (n2 / 10)
	{
		ft_putnbr_fd(n2 / 10, fd);
	}
	ft_putchar_fd(n2 % 10 + '0', fd);
}

/* Outputs the integer ’n’ to the given file
descriptor. */