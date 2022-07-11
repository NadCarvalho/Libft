/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:59:15 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/08 00:35:02 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int length;
	length = ft_strlen(s);

	while(length >= 0)
	{
		if(s[length] == (unsigned char) c)
			return ((char *) s + length);
		length--;
	}
	return (NULL);
}
