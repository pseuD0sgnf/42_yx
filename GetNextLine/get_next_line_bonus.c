/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:06:31 by yuxchen           #+#    #+#             */
/*   Updated: 2024/02/04 17:14:28 by yuxchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	clean_list(t_list **list, t_list *new_node, char *new_buf)
{
	t_list	*tmp;

	if (!*list)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free((*list)->buffer);
		free(*list);
		*list = tmp;
	}
	if (new_buf[0])
	{
		new_node->buffer = new_buf;
		new_node->next = NULL;
		*list = new_node;
	}
	else
	{
		free(new_buf);
		free(new_node);
		*list = NULL;
	}
}

void	new_list(t_list **list)
{
	t_list	*new_node;
	t_list	*last_node;
	char	*new_buf;
	int		i;
	int		j;

	if (!list)
		return ;
	new_buf = malloc(BUFFER_SIZE + 1);
	new_node = malloc(sizeof(t_list));
	if (!new_buf || !new_node)
		return ;
	last_node = find_last_node(*list);
	i = 0;
	j = 0;
	while (last_node->buffer[i] && last_node->buffer[i] != '\n')
		i++;
	while (last_node->buffer[i++])
		new_buf[j++] = last_node->buffer[i];
	new_buf[j] = '\0';
	clean_list(list, new_node, new_buf);
}

char	*read_line(t_list *list)
{
	char	*next_line;
	int		next_line_len;

	if (!list)
		return (NULL);
	next_line_len = get_line_len(list);
	next_line = malloc(next_line_len + 1);
	if (!next_line)
		return (NULL);
	get_line(list, next_line);
	return (next_line);
}

void	create_list(int fd, t_list **list)
{
	char	*buf;
	int		buf_bytes;

	while (!find_next_line(list[fd]))
	{
		buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buf)
			return ;
		buf_bytes = read(fd, buf, BUFFER_SIZE);
		if (!buf_bytes)
		{
			free(buf);
			return ;
		}
		buf[buf_bytes] = '\0';
		if (buf[buf_bytes] == '\0')
			append_buf(fd, list, buf);
	}
}

char	*get_next_line(int fd)
{
	static t_list	*list[FOPEN_MAX];
	char			*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0 || fd > FOPEN_MAX)
		return (NULL);
	create_list(fd, list);
	if (!list[fd])
		return (NULL);
	next_line = read_line(list[fd]);
	new_list(&list[fd]);
	return (next_line);
}

// # include <fcntl.h>

// int main()
// {
//     int     fd1;
//     int     fd2;
//     int     fd3;
//     int     lines;
// 	char	*line1;
// 	char	*line2;
// 	char	*line3;

//     lines = 1;
//     fd1 = open("test1.txt", O_RDONLY);
//     fd2 = open("test2.txt", O_RDONLY);
//     fd3 = open("test3.txt", O_RDONLY);
//     while(lines < 10)
// 	{
// 		line1 = get_next_line(fd1);
// 		printf("%d -> %s\n", lines++, line1);
// 		free(line1);
// 		line2 = get_next_line(fd2);
// 		printf("%d -> %s\n", lines++, line2);
// 		free(line2);
// 		line3 = get_next_line(fd3);
// 		printf("%d -> %s\n", lines++, line3);
// 		free(line3);
// 	}
// }