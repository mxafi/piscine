/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:53:12 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/05 17:05:42 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	
	printf("Starting tests.\n\n");

    char    src[] = "iines";
    char    dst[] = "akuankka";
    char    *res = ft_strcpy(dst, src);
    printf("result: %s\n\n", res);

	printf("Testing complete.\n");

	return (0);
}
