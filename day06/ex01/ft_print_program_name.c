/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:42:27 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 18:01:44 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*program_name;
	int		i;

	program_name = argv[0];
	i = 0;
	(void)argc;
	while (program_name[i] != '\0')
	{
		ft_putchar(program_name[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
