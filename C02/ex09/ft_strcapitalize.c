/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:21:57 by ihama             #+#    #+#             */
/*   Updated: 2022/08/01 21:25:33 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (2);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c < '0' || c > '9')
	{
		return (0);
	}
	return (3);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (ft_lowcase(str[0]) == 1)
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (ft_lowcase(str[i - 1]) == 0 && ft_lowcase(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		else if (ft_lowcase(str[i - 1]) > 0 && ft_lowcase(str[i]) == 2)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
