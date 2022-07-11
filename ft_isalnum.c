/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:57:30 by ncarolin          #+#    #+#             */
/*   Updated: 2022/06/14 21:27:15 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalnum(int input)
{
	if((input >= 48 && input <= 57) || (input >=65 && input <= 90) || (input >= 97 && input <= 122))
		return (1);
		
	return (0);
}
