/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:41:24 by safernan          #+#    #+#             */
/*   Updated: 2021/04/24 19:23:00 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

extern ssize_t ft_write(int fd, const void *buf, size_t count);
extern size_t ft_strlen(char *str);
extern char *ft_strcpy(char *dest, const char *src);
//extern int ft_strcmp(const char *s1, const char *s2);
//extern char *ft_strdup(const char *s);
//extern ssize_t ft_read(int fd, const void *buf, size_t count);

void	test_write()
{
	int i;
	int j;

	printf("-----------------------------\n");
	printf("-----------FT_WRITE----------\n");
	printf("-----------------------------\n\n");

	printf("%-15s : %s\n", "Parametre", "\"\"");
	i = ft_write(1, "", 0);
	write(1, "\n", 1);
	j = write(1, "", 0);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write return", i);
	printf("%-15s : %d\n\n", "write return", j);

	printf("%-15s : %s\n", "Parametre", "\"Hola buenas ?\"");
	i = ft_write(1, "Hola buenas ?", 14);
	write(1, "\n", 1);
	j = write(1, "Hola buenas ?", 14);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write return", i);
	printf("%-15s : %d\n\n", "write return", j);

	printf("%-15s : %s\n", "Parametre", "\"12345678\"");
	i = ft_write(1, "12345678", 10);
	write(1, "\n", 1);
	j = write(1, "12345678", 10);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write return", i);
	printf("%-15s : %d\n\n", "write return", j);

	printf("%-15s : %s\n", "Parametre", "\"sasexcgvhghewf54\"");
	i = ft_write(1, "sasexcgvhghewf54", 26);
	write(1, "\n", 1);
	j = write(1, "sasexcgvhghewf54", 26);
	write(1, "\n", 1);
	printf("%-15s : %d\n", "ft_write  return", i);
	printf("%-15s : %d\n\n", "write  return", j);
}

void	test_strlen()
{
	printf("-----------------------------\n");
	printf("-----------FT_STRCPY----------\n");
	printf("-----------------------------\n\n");

	printf("%-15s : %s\n", "Parametre", "\"\"");
	printf("%-15s : %zu\n", "ft_strlen return", ft_strlen(""));
	printf("%-15s : %zu\n\n", "strlen return ", strlen(""));

	printf("%-15s : %s\n", "Parametre", "\"Hola buenas ?\"");
	printf("%-15s : %zu\n", "ft_strlen return", ft_strlen("Hola buenas ?"));
	printf("%-15s : %zu\n\n", "strlen return", strlen("Hola buenas ?"));

	printf("%-15s : %s\n", "Parametre", "\"12345678\"");
	printf("%-15s : %zu\n", "ft_strlen return", ft_strlen("12345678"));
	printf("%-15s : %zu\n\n", "strlen return", strlen("12345678"));

	printf("%-15s : %s\n", "Parametre", "\"sasexcgvhghewf54\"");
	printf("%-15s : %zu\n", "ft_strlen return", ft_strlen("sasexcgvhghewf54"));
	printf("%-15s : %zu\n\n", "strlen return", strlen("sasexcgvhghewf54"));
}

void	test_strcpy()
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;

	s1 = malloc(sizeof(char) * 14);
	s2 = malloc(sizeof(char) * 9);
	s3 = malloc(sizeof(char) * 17);
	s4 = malloc(sizeof(char) * 1);

	printf("-----------------\n");
	printf("----FT_STRCPY----\n");
	printf("-----------------\n\n");

	printf("%-15s : %s\n", "string", "\"Hola buenas ?\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s1, "Hola buenas ?"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s1, "Hola buenas ?"));

	printf("%-15s : %s\n", "string", "\"12345678\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s2, "12345678"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s2, "12345678"));

	printf("%-15s : %s\n", "string", "\"sasexcgvhghewf54\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s3, "sasexcgvhghewf54"));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s3, "sasexcgvhghewf54"));

	printf("%-15s : %s\n", "string", "\"\"");
	printf("%-15s : %s\n", "ft_strcpy", ft_strcpy(s4, ""));
	printf("%-15s : %s\n\n", "strcpy", strcpy(s4, ""));

}

int main()
{
	test_write();
	test_strlen();
}