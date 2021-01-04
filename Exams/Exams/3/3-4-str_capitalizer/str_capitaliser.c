/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitaliser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:42:03 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:42:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_capitaliser(int ac, char **tab)
{
	int i;
	int j;
	int temp;

	i = 1;
	j = 0;
	temp = ac;
	while (ac > 1)
	{
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] >= 'A' && tab[i][j] <= 'Z')
				tab[i][j] = tab[i][j] + 32;
			j++;
		}
		i++;
		j = 0;
		ac--;
	}
	ac = temp;
	i = 1;
	while (ac > 1)
	{
		if (tab[i][0] == ' ')
			while (tab[i][j] == ' ')
				j++;
		tab[i][j] = tab[i][j] - 32;
		while (tab[i][j] != '\0')
		{
			if (tab[i][j] == ' ' && tab[i][j + 1] >= 'a' && tab[i][j + 1] <= 'z')
				tab[i][j + 1] -= 32;
			j++;
		}
		i++;
		j = 0;
		ac--;
	}
	ac = temp;
	i = 1;
	while (ac > 1)
	{
		while (tab[i][j] != '\0')
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
		ac--;
	}
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_capitaliser(ac, av);
	return (0);
}
