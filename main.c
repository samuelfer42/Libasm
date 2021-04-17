/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:41:24 by safernan          #+#    #+#             */
/*   Updated: 2021/04/17 10:49:46 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

//extern size_t ft_strlen(char *str);
//extern int ft_strcmp(const char *s1, const char *s2);
//extern char *ft_strcpy(char *dest, const char *src);
//extern char *ft_strdup(const char *s);
extern ssize_t ft_write(int fd, const void *buf, size_t count);
//extern ssize_t ft_read(int fd, const void *buf, size_t count);

void	test_write()
{
	int i;
	int j;

	printf("----------------\n");
	printf("----FT_WRITE----\n");
	printf("----------------\n\n");

	printf("%-15s : %s\n", "string", "\"\"");
	i = ft_write(1, "", 0);
	write(1, "\n", 1);
	j = write(1, "", 0);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write return", i);
	printf("%-15s : %d\n\n", "write return", j);

	printf("%-15s : %s\n", "string", "\"Hola buenas ?\"");
	i = ft_write(1, "Hola buenas ?", 14);
	write(1, "\n", 1);
	j = write(1, "Hola buenas ?", 14);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write return", i);
	printf("%-15s : %d\n\n", "write return", j);

	printf("%-15s : %s\n", "string", "\"0123446789\"");
	i = ft_write(1, "0123446789", 10);
	write(1, "\n", 1);
	j = write(1, "0123446789", 10);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write return", i);
	printf("%-15s : %d\n\n", "write return", j);

	printf("%-15s : %s\n", "string", "\"abcdefghijklmoopqrstuvwxyz\"");
	i = ft_write(1, "abcdefghijklmoopqrstuvwxyz", 26);
	write(1, "\n", 1);
	j = write(1, "abcdefghijklmoopqrstuvwxyz", 26);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write  return", i);
	printf("%-15s : %d\n\n", "write  return", j);
}
int main()
{
	test_write();
}