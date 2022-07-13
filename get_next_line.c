/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:47:20 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/05/16 12:47:20 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(int fd, char *str)
{
	char	*string;
	int		n;

	string = malloc(BUFFER_SIZE);   
	if (!string)
		return(NULL);
	if (ft_strchr(str, '\n') == 0 && n != 0)
	{
		n = read (fd, string, BUFFER_SIZE);
		if (n == -1)
			return(NULL);
		string[n] = '\0';
		str = ft_strjoin(str, string);
	}
	free(string);
	return(str);
}
	
static char *ret_line(char *str)
{
	char	*string;
	int		i;

	i = 0;
	if(!str[i])
		return(NULL);
	string = (char *)malloc(ft_strlen(str));
	if(!string)
		return(NULL);
	while(str[i])
	{
		string[i] == str[i]
		if(string[i] == '\n')
		{
			string[i + 1] = 0;
			break;
		}
		i++;
	}
	return(string);
}
static char *new_line(char *str)
{
	char	*string;
	int		i;

	i = 0;
	string = ft_substr(str, i, BUFFER_SIZE);
	return(string);
}
char *get_next_line(int fd)
{
	static char	*string[257];
	char		*ret;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (NULL);
	if (!string[fd])
		string[fd] = ft_strdup("");
	string[fd] = ft_read(fd, linstring]);
	if (string[fd] == NULL)
		return (NULL);
	ret = ret_line(string[fd]);
	string[fd] = new_line(string[fd]);
	return (ret);
}