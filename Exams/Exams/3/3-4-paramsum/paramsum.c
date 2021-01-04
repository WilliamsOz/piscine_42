/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:40:51 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:40:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	return (nb);
}

void	ft_paramsum(int ac, char **tab)
{
	int i;
	int j;
	int count;

	i = 1;
	j = 0;
	count = 0;
	while (ac > 1)
	{
		while (tab[i][j] != '\0')
			j++;
		i++;
		ac--;
		count++;
	}
	ft_putnbr(count);
	ft_putchar('\n');	
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}
	else
		ft_paramsum(ac, av);
	return (0);
}
