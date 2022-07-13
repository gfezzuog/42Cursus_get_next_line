/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:47:45 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/05/16 12:47:45 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#   define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

char    *get_next_line(int fd);
char	*ft_strdup(char *s1);
char    *ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
int     *ft_strchr(char *s, int c);
int     ft_strlen(char *str);


#endif