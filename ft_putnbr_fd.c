/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:26 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:36:13 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int number;
	number = n;

	if(n < 0)
	{
		ft_putchar_fd('-', fd);
		number = n * -1;
	}
	if(number > 9)
		ft_putnbr_fd(number / 10, fd);
		
	ft_putchar_fd(number % 10 + '0', fd);
}