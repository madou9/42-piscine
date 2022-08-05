/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayad <fayad@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:25:04 by fayad             #+#    #+#             */
/*   Updated: 2022/07/24 21:43:00 by fayad            ###   ########.fr       */
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
			else if (i != 0 && i != y - 1 && (j == 0 || j == x - 1))
				ft_putchar('|');
			else if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
				ft_putchar('o');
			else
				ft_putchar('-');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
