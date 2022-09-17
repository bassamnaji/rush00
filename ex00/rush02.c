/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:59:14 by bnaji             #+#    #+#             */
/*   Updated: 2022/09/17 14:19:52 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_in_line(char first, char last, char between, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == x)
			ft_putchar(last);
		else
			ft_putchar(between);
		i++;
	}
}

void	print_lines(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
			print_in_line('A', 'A', 'B', x);
		else if (j == y)
			print_in_line('C', 'C', 'B', x);
		else
			print_in_line('B', 'B', ' ', x);
		j++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		write(1, "ERROR: Invalid inputs\nInputs must be greater than zero", 54);
	else
		print_lines(x, y);
}

int		main(void);
