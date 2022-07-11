/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:59:19 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:50:13 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t len;
	start = 0;

	if(s1 == NULL || set == NULL)
		return (NULL);
	
	while(s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	
	len = ft_strlen(&s1[start]);

	if(len != 0)
	{
		while(s1[start + len - 1] && ft_strrchr(set, s1[start + len -1]) != NULL)
			len--;
	}
	return (ft_substr(s1, start, len));
}