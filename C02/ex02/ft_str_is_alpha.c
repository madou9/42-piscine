/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:18:49 by ihama             #+#    #+#             */
/*   Updated: 2022/08/01 22:35:39 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;

	if (str[0] == '\0')
		return (1);
	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z')
			|| (str[counter] >= 'a' && str[counter] <= 'z'))
		counter++;
		else
			return (0);
	}
	return (1);
}
