/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:31:38 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:31:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main(int ac, char **av)
{
	int nb1;
	int nb3;
	int nb2;

	nb1 = 1;
	nb3 = 1;
	nb2 = ft_atoi(av[ac - 1]);
	if (ac != 2 && av[ac - 1] > 0)
	{
		ft_putchar('\n');
		return (0);
	}
	
	while (nb1 < 10)
	{
		ft_putnbr(nb1);
		ft_putstr(" x ");
		ft_putnbr(nb2);
		ft_putstr(" = ");
		nb3 = nb1 * nb2;
		ft_putnbr(nb3);
		ft_putchar('\n');
		nb1 += 1;
		
	}
	return (0);
}
