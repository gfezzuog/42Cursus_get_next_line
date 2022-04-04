/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:33:59 by dgioia            #+#    #+#             */
/*   Updated: 2022/04/04 17:33:59 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
l'obbiettivo di get_next_line é quello di creare una funzione che legge
il testo una riga alla volta fino alla fine del file.
Se non c'é nient'altro da leggere o ci sono errori, restituisce NULL

il programma deve compilare con -D BUFFER_SIZE=val che viene utilizzato come dimensione del
buffer per le chiamate in lettura.

APPUNTI:
- funzione per leggere e salvare la riga
*/

#include "get_next_line.h"
// cancellare dopo aver finito i test
#include <stdio.h>
#include <fcntl.h>

char *ft_read_save_str(int fd, char *save)
{
    char *buffer;
    int r_bytes;

    buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buffer)
        return (NULL);

    while (!ft_strchr(save, '\n'))
    {
        r_bytes = read(fd, buffer, BUFFER_SIZE);
        if (r_bytes == -1)
            return (NULL);
    }
}

char *get_next_line(int fd)
{
    char *line;
    static char *save;

    /* se fd */
}

/* i test vengono effettuati su tests/1.txt */
int main()
{
    char *line;
    int i;
    int fd;

    fd = open("tests/1.txt", O_RDONLY);
    i = 1;
    while (i < 7)
    {
        line = get_next_line(fd);
        printf("%s", line);
        i++;
    }
    close(fd);
    return (0);
}