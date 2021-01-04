/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:17:06 by fwuensch          #+#    #+#             */
/*   Updated: 2020/06/16 13:34:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
	{
		ft_putchar('\n');
		return ;
	}	
	while (str[i] != ' ' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 2 || argv[argc - 1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_first_word(argv[argc - 1]);
	return (0);
}
