/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:42 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:45:18 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *src)
{
	char *ptr;
	size_t i;
	i = 0;

	ptr = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);

	if(ptr == NULL)
		return (NULL);
	
	while(src[i])
	{
		ptr[i] = src[i];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}