/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:42:22 by dgioia            #+#    #+#             */
/*   Updated: 2022/04/04 17:42:22 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

/* per trovare la corrispondenza in \n */
char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != (char)c)
        i++;
    if (s[i] == (char)c)
        return ((char *)s + i);
    return (NULL);
}

/* per concatenare le stringhe */
char *ft_strjoin(char const *s1, char const *s2)
{
    char *s3;
    int i;
    int j;

    i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
    s3 = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    j = 0;
    if (!s3)
        return (0);
    while (s1[j] != '\0')
    {
        s3[i] = s1[j];
        j++;
        i++;
    }
    j = 0;
    while (s2[j] != '\0')
    {
        s3[i] = s2[j];
        j++;
        i++;
    }
    s3[i] = '\0';
    return (s3);
}