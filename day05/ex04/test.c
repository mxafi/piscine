/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:53:12 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/05 18:04:25 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	
	printf("Starting tests.\n\n");

    char    src1[] = "iines";
    char    src2[] = "iines";
    char    dst1[] = "akuankka";
    char    dst2[] = "akuankka";
    char    *res1 = strncpy(dst1, src1, 7);
    char    *res2 = ft_strncpy(dst2, src2, 7);
    printf("expected result: %s\n", res1);
    printf("  actual result: %s\n\n", res2);
    printf("expected source: %s\n", src1);
    printf("  actual source: %s\n\n", src2);
    printf("expected destin: %s\n", dst1);
    printf("  actual destin: %s\n\n", dst2);

	printf("Testing complete.\n");

	return (0);
}
