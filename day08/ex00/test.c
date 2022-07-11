/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:26:26 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 23:47:09 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str);

int		main(void)
{
	/*
	char str[256] = "this is a string";
	char **str_arr;

	str_arr = ft_split_whitespaces(str);
	int i = 0;
	while (i < 4)
	{
		printf("%s\n", str_arr[i]);
		i++;
	}
	*/
	char** res;

	for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");

	for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");

	for (res = ft_split_whitespaces("   \t\n"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	
	for (res = ft_split_whitespaces(" moi hei kakka "); *res != 0; res++)
		printf("'%s',", *res);
	
	/*
	res = ft_split_whitespaces("");
	while (*res)
	{
		printf("'%s',", *res);
		res++;
	}
	*/
	return (0);
}
