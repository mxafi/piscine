/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:47:16 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/10 21:01:13 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nmatch(char *s1, char *s2);

int	main(void)
{
	printf("Testing for matchcount\n\n");

	printf("str1: abcbd\n");
	printf("str2: *b*\n");
	printf("outp: %d\n\n", nmatch("abcbd", "*b*"));

	printf("str1: abc\n");
	printf("str2: a**\n");
	printf("outp: %d\n\n", nmatch("abc", "a**"));

	printf("str1: abcd\n");
	printf("str2: abcd\n");
	printf("outp: %d\n\n", nmatch("abcd", "abcd"));

	printf("str1: aa\n");
	printf("str2: ***t\n");
	printf("outp: %d\n\n", nmatch("aa", "***t"));

	printf("str1: aa\n");
	printf("str2: ***a\n");
	printf("outp: %d\n\n", nmatch("aa", "***a"));

	return (0);
}
