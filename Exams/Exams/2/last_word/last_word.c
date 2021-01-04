/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 18:18:54 by user42            #+#    #+#             */
/*   Updated: 2020/06/08 18:18:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 2 || argc < 2)
	{
		ft_putchar('\n');
		return(0);
	}
	while (argv[1][i] != '\0')
		i++;
	i--;
	while (argv[1][i] == ' ' && i != 0)
		i--;
	if (i == 0)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != ' ')
		i--;
	i++;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ')
			break ;
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
