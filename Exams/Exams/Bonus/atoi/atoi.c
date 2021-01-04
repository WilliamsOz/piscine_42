/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 19:09:12 by user42            #+#    #+#             */
/*   Updated: 2020/06/17 17:12:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	while ((str[i] == 't') || (str[i] == 'v') || (str[i] == 'n') ||
			(str[i] == 'r') || (str[i] == 'f') || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if (neg % 2 == 1)
		neg = -1;
	else
		neg = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	printf("%d\n", res * neg);
	return (neg * res);
}

int main(void)
{
	int res;
	res = ft_atoi("   ---+--+123abc456 ");
	printf("%d\n", res);
	return (0);
}

