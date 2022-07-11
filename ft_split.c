/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarolin <ncarolin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:58:34 by ncarolin          #+#    #+#             */
/*   Updated: 2022/07/11 00:32:42 by ncarolin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    nb_words(const char *s, char c)
{
    int    count;
    int    j;
    int    aux;

    count = 0;
    aux = 0;
    j = 0;
    while (s[j] != '\0')
    {
        if (s[j] != c && aux == 0)
        {
            aux = 1;
            count++;
        }
        else if (s[j] == c)
            aux = 0;
        j++;
    }
    return (count);
}

static char    *ft_strndup(const char *s, int start, int end)
{
    char    *new;
    int        i;

    i = 0;
    new = malloc(sizeof(char) * (end - start + 1));
    if (!new)
        return (NULL);
    while (start < end)
    {
        new[i] = s[start];
        start++;
        i++;
    }
    new[i] = '\0';
    return (new);
}

char    **ft_split(char const *s, char c)
{
    char    **split;
    int    i;
    int        pos;
    int        start;

    i = 0;
    pos = 0;
    start = -1;
    split = malloc(sizeof(char *) * (nb_words(s, c) + 1));
    if (!split)
        return (NULL);
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && start < 0)
            start = i;
        else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
        {
            split[pos++] = ft_strndup(s, start, i);
            start = -1;
        }
        i++;
    }
    split[pos] = NULL;
    return (split);
}