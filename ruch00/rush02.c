/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayad <fayad@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:10:07 by fayad             #+#    #+#             */
/*   Updated: 2022/07/24 22:18:10 by fayad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			if (((j != 0 && j != x - 1) && (i != 0 && i != y - 1)))
				ft_putchar(' ');
			else if (i == 0 && (j == 0 || j == x - 1))
				ft_putchar('A');
			else if (i == y - 1 && (j == 0 || j == x - 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
