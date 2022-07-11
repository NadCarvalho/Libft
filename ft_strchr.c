/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:38 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/10 23:26:19 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	
	while(s[i])
	{
		if(s[i] == (unsigned char) c)
			return ((char *)s + i);
		i++;
	}

	if(s[i] == (unsigned char) c)
		return ((char *)s + i);
	return (NULL);
}