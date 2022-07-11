/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:57:14 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:44:06 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_isspace(int c)
{
	if(c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f' || c == '\v')
		return (1);
	return (0);
}

int ft_atoi(const char *nptr)
{
	int num;
	int sign;

	while((ft_isspace(*nptr)))
		nptr++;
		
	sign = 1;
	
	if(*nptr == '+' || *nptr =='-')
	{
		if(*nptr == '-')
			sign = -1;
		nptr++;
	}
	
	num = 0;
	
	while((ft_isdigit(*nptr)))
	{
		num += 10;
		num += sign * (*nptr - '0');
		nptr++;
	}
	
	return (num);
}