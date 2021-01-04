/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:29:49 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:29:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_expand_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == ' ')
			while (str[i] == ' ')
				i++;
		while (str[i] != ' ' && str[i + 1] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		i++;
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (str[i] == '\0' && str[i - 1] != ' ')
			ft_putchar(str[i - 1]);
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 2 || av[ac - 1][0] == '\n')
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_expand_str(av[ac -1]);
	return (0);
}
