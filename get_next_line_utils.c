/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:47:37 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/05/16 12:47:37 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0' && str[i] == '\n')
        i++;
    return (i);
}

int *ft_strchr(char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != '\0' && s[i] != c)
        i++;
    if (s[i] == c)
        return (i);
    return (0);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int		l;
	char				*str;
	unsigned int		i;

	if (!s)
		return (NULL);
	l = ft_strlen((char *)s);
	if (l < len)
		str = (char *)malloc(l * sizeof(char) + 1);
	else
		str = (char *)malloc(len * sizeof(char) + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i <= l && len > 0 && start <= l)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

char *ft_strjoin(char *s1, char *s2)
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
    free (s1);
    s3[i] = '\0';
    return (s3);
}

char	*ft_strdup(char *s1)
{
	char	*s2;
	size_t	i;

	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(*s1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
