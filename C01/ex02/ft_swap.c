/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:30:29 by ihama             #+#    #+#             */
/*   Updated: 2022/07/30 00:02:36 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*nt	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 135;
	printf("value: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("value: %d, b: %d\n", a, b);
	return (0);
} */