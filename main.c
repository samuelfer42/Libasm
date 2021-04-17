/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:41:24 by safernan          #+#    #+#             */
/*   Updated: 2021/04/17 10:31:47 by safernan         ###   ########.fr       */
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
	printf("============================================\n");
	printf("================ Ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "", 1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "", 1));
}
int main()
{
	test_write();
}