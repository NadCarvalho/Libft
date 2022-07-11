/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:59:22 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:46:46 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;
	i = 0;
	j = 0;
	
	str = (char*)malloc(sizeof(*s) * (len + 1));
	
	if(!str)
		return (NULL);
	
	while(s[i])
	{
		if(i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	return (str);
}