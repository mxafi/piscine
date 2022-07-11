/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:51:12 by malaakso          #+#    #+#             */
/*   Updated: 2022/07/07 23:47:06 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	word_length(char *str, int i)
{
	int l;

	l = 0;
	while ((str[i] != '\0') && (ft_is_space(str[i]) == 0))
	{
		l++;
		i++;
	}
	return (l);
}

int	word_count(char *str)
{
	int i;
	int	is_word;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((ft_is_space(str[i]) == 0) && (is_word == 0))
		{
			count++;
			is_word = 1;
		}
		else if (ft_is_space(i))
			is_word = 0;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int	**all_words;
	int	i;
	int	word_length;
	int	current_word_length;
	int running_word_count;
	int	running_word_char_count;

	i = 0;
	running_word_count = 0;
	all_words = malloc(sizeof(*str) * word_count(str) + 1);
	if (all_words == NULL)
		return (NULL);
	while (str[i] != '\0') // top loop through string
	{
		while (str[i] != '\0' && ft_is_space(str[i]) == 1)
			i++;
		if (str[i] != '\0' && ft_is_space(str[i]) == 0)
		{
			running_word_char_count = 0;
			current_word_length = word_length(str, i);
			all_words[running_word_count] = malloc(sizeof(*str) * current_word_length + 1);
			if (all_words[running_word_count] == NULL)
				return (NULL);
			while (all_words[running_word_count][running_word_char_count] <= current_word_length)
			{
				all_words[running_word_count][running_word_char_count] = str[i];
				running_word_char_count++;
			}
			all_words[running_word_count][running_word_char_count] = '\0';
			running_word_count++;
			i++;
		}
	}
	return (all_words);
}
