/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:49:55 by ihama             #+#    #+#             */
/*   Updated: 2022/07/30 00:10:21 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

		i = 0;
	while (i < size)
	{
		size--;
		a = tab[i];
		tab[i] = tab[size];
		tab[size] = a;
		i++;
	}
}
