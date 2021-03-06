/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 13:21:17 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 13:54:07 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strstr(const char *search, const char *input)
{
	size_t i;
	size_t j;

	if (*input == '\0')
		return ((char *)search);
	i = 0;
	while (search[i])
	{
		j = 0;
		while (search[i + j] == input[j])
		{
			j++;
			if (input[j] == '\0')
				return ((char *)search + i);
		}
		i++;
	}
	return (NULL);
}
