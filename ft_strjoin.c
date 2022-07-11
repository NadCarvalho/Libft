/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:49 by ncarolin          #+#    #+#             */
/*   Updated: 2022/06/29 20:23:42 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *str;
	i = 0;
	j = 0;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));

	if(str == NULL)
		return (NULL);
	
	while(s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while(s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	
	str[i + j] = '\0';
	return (str);
}