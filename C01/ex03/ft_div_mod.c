/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:42:24 by ihama             #+#    #+#             */
/*   Updated: 2022/07/30 00:02:56 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	mydiv;
	int	mymod;

	ft_div_mod(20, 10, &mydiv, &mymod);
	printf("div is: %d, mod is: %d\n", mydiv, mymod);
	return (0);
} */