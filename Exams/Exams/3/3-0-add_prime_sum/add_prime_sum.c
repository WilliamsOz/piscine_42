/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 16:11:03 by user42            #+#    #+#             */
/*   Updated: 2020/06/22 16:11:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
{
	while (

}

int	ft_is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prime_sum(unsigned int nb)
{
	int total;

	total = 0;
	while (nbr > 1)
	{
		if (ft_is_prime(nbr) == 1)
			total += nbr;
		nbr--;
	}
	ft_putnbr(nbr);	
}

int main(int ac, char **av)
{
	if (ac != 2 || av[ac -1] <= 0)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_add_prime_sum(av[ac - 1]);
	return (0);
}

