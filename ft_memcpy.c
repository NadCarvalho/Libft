/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:07 by ncarolin          #+#    #+#             */
/*   Updated: 2022/06/20 21:13:08 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}