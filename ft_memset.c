/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:15 by ncarolin          #+#    #+#             */
/*   Updated: 2022/06/15 16:26:54 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void    *ft_memset(void *s, int c, size_t n)
 {
	unsigned char *str;
 	size_t counter;

	 str = s;
	 counter = 0;

	 while(counter < n)
	 {
		 str[counter] = c;
		 counter++;
	 }
	 return (str);
 }