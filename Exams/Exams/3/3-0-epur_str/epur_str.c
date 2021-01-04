/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:10:58 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:10:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == ' ')
		{
			while (str[i] == ' ')
				i++;
		}
		while (str[i] != ' ' && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] == ' ' && str[i + 1] != '\0')
		{
			ft_putchar(str[i]);
			while (str[i] == ' ')
				i++;
		}
	}
	ft_putchar('\n');
}

int main(int ac, char **av)
{
	if (ac != 2 || av[ac - 1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_epur(av[ac - 1]);
	return (0);
}
