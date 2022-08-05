/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihama <ihama@student.42heilbronn>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:48:30 by ihama             #+#    #+#             */
/*   Updated: 2022/08/02 13:42:59 by ihama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	nbr_characters;

	nbr_characters = 0;
	while (str[nbr_characters] != '\0')
		nbr_characters++;
	return (nbr_characters);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	length;

	length = ft_strlen(src);
	counter = 0;
	if (size > 0)
	{
		while ((src[counter] != '\0') && (counter < (size - 1)))
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (length);
}

int    main()
{
    char src[] = "World1!";
    char dest[] = "Hello ";
    printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}