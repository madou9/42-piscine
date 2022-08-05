/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:18:45 by ihama             #+#    #+#             */
/*   Updated: 2022/08/01 14:28:18 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	acache;
	int	bcache;

	acache = *a;
	bcache = *b;
	*a = acache / bcache;
	*b = acache % bcache;
}
/*int	main(void)
{
	int	mya;
	int	myb;

	mya = 142;
	myb = 10;
	ft_ultimate_div_mod(&mya, &myb);
	printf("Div in a: %d\nMod in b: %d\n", mya, myb);
	return (0);
}*/
