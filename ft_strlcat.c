/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:52 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:44:58 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t dstlen;
	size_t i;
	
	srclen = ft_strlen(src);
	dstlen = 0;
	i = 0;

	while(dst[dstlen] && dstlen < size)
		dstlen++;

	if(dstlen < size)
	{
		while((i + dstlen) < (size - 1) && src[i])
		{
			dst[i + dstlen] = src[i];
			i++;
		}
		dst[i + dstlen] = '\0';
	}
	return (dstlen + srclen);
}