/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:05:18 by ihama             #+#    #+#             */
/*   Updated: 2022/08/02 23:15:29 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		i2 = 0;
		while (str[i + i2] == to_find[i2] && str[i + i2] != '\0')
		{
			if (to_find[i2 + 1] == '\0')
				return (&str[i]);
			i2++;
		}
		i++;
	}
	return (0);
}
