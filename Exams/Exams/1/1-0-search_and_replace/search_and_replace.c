/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:09:23 by fwuensch          #+#    #+#             */
/*   Updated: 2020/06/16 13:28:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sar(char *str, char seek, char replace)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == seek)
			str[i] = replace;
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');

}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	else
		ft_sar(av[ac - 3], av[ac - 2][0], av[ac - 1][0]);
	return (0);
}
