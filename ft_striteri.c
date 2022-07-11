/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:45 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:47:53 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	unsigned int i;
	i = 0;

	if(!s || !(*s) || !f)
		return ;
	
	while(s[i])
	{
		f(i, &s[i]);
		++i;
	}
}