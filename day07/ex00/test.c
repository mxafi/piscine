/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:18:03 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 19:07:07 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	str[] = "DuplicateMe";
	char	*duplicate;

	printf("original: %s\n", str);
	duplicate = ft_strdup(str);
	printf("origafte: %s\n", str);
	printf("the copy: %s\n", duplicate);
}
