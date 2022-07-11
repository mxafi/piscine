/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:53:12 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/05 18:32:54 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	
	printf("Starting tests.\n\n");
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("42"), ft_atoi("42"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("975246"), ft_atoi("975246"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("		8"), ft_atoi("		8"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("	 6"), ft_atoi("		 6"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi(""), ft_atoi(""));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-"), ft_atoi("-"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("--"), ft_atoi("--"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("+"), ft_atoi("+"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("++"), ft_atoi("++"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("  -005"), ft_atoi("  -005"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("0067"), ft_atoi("0067"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("\n  5"), ft_atoi("\n  5"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("42lmao"), ft_atoi("42lmao"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("us-42"), ft_atoi("us-42"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("21474836479"), ft_atoi("21474836479"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("21474836489"), ft_atoi("21474836489"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-21474836489"), ft_atoi("-21474836489"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-21474836499"), ft_atoi("-21474836499"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("9223372036854775807"), ft_atoi("9223372036854775807"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("9223372036854775808"), ft_atoi("9223372036854775808"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("92233720368547758089"), ft_atoi("92233720368547758089"));
	printf("Testing complete.\n");

	return (0);
}
