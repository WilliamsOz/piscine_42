/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 10:50:34 by user42            #+#    #+#             */
/*   Updated: 2020/06/15 10:50:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc,char **argv)
{
	int i;

	i = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	argc = argc - 1;
	while (argv[argc][i] != '\0')
	{
		ft_putchar(argv[argc][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
