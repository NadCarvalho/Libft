/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:57:54 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/10 23:17:13 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char i;
	unsigned char *str;
	unsigned char charac;
	str = (unsigned char *)s;
	charac = (unsigned char)c;
	i = 0;
	
	while(i < n)
	{
		if(str[i] == charac)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}