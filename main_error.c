/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safernan <safernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:50:15 by safernan          #+#    #+#             */
/*   Updated: 2021/05/26 16:18:08 by safernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdio.h>
#include <unistd.h>

int		main()
{
	int ret = read(-3, "", 1);
	printf("errno : %d\n", errno);
	printf("ret : %d\n", ret);
}