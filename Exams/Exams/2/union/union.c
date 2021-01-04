/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:45:20 by user42            #+#    #+#             */
/*   Updated: 2020/06/15 15:45:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *str1, char *str2)
{
	int i;
	int j;
	int  tab[127];

	i = 0;
	while (i < 127)
	{
		tab[i] = 0;
		i++;
	}
	j = 0;
	while (str1[j] != '\0')
	{
		i = str1[j];
		if (tab[i] == 0)
		{
			ft_putchar(i);
			tab[i] = 1;
		}
		j++;

	}
	j = 0;
	while (str2[j] != '\0')
	{
		i = str2[j];
		if (tab[i] == 0)
		{
			ft_putchar(i);
			tab[i] = 1;
		}
		j++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_union(argv[argc - 2], argv[argc - 1]);
	return (0);
}
