/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:38:02 by user42            #+#    #+#             */
/*   Updated: 2020/06/15 15:38:02 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	do_op(char *str1, char *op, char *str2)
{
	int result_str1;
	int result_str2;

	result_str1 = atoi(str1);
	result_str2 = atoi(str2);
	if (op[0] == '*')
		printf("%d\n", result_str1 * result_str2);
	else if (op[0] == '/')
		printf("%d\n", result_str1 / result_str2);
	else if (op[0]  == '+')
		printf("%d\n", result_str1 + result_str2);
	else
		printf("%d\n", result_str1 % result_str2);
}

int main(int argc, char ** argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	do_op(argv[argc - 3], argv[argc - 2], argv[argc - 1]);
	return (0);
}
