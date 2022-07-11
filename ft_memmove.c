/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:12 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/10 21:48:36 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned int i;

	if(dst == NULL && src == NULL)
		return (NULL);
	if(dst > src)
	{
		i = 0;
		while(i < n)
		{
			((char *) dst)[i] = ((char *) src)[i];
			i++;
			
		}
	}
	else
	{
		i = n;
		while(i > 0)
		{
			((char *) dst)[i - 1] = ((char *) src)[i - 1];
			i--;
		}
	}
	return (dst);
}