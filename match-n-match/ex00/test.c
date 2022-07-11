/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:47:16 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/10 22:32:51 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int	main(void)
{
	printf("Testing START\n\n");
	printf("str1: abcbd\n");
	printf("str2: *b*\n");
	printf("outp: %d\n", nmatch("abcbd", "*b*"));
	printf("expc: 2\n\n");

	printf("str1: abc\n");
	printf("str2: a**\n");
	printf("outp: %d\n", nmatch("abc", "a**"));
	printf("expc: 3\n\n");

	printf("str1: abcd\n");
	printf("str2: abcd\n");
	printf("outp: %d\n", nmatch("abcd", "abcd"));
	printf("expc: 1\n\n");

	printf("str1: aa\n");
	printf("str2: ***t\n");
	printf("outp: %d\n", nmatch("aa", "***t"));
	printf("expc: 0\n\n");

	printf("str1: aa\n");
	printf("str2: ***a\n");
	printf("outp: %d\n", nmatch("aa", "***a"));
	printf("expc: 2\n\n");

	printf("Testing STOP\n");
}
