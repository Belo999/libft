/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 13:30:42 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 13:56:28 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strnstr(const char *search, const char *input, size_t n)
{
	size_t i;
	size_t j;

	if(*input == '\0')
		return ((char*)search);
	i = 0;
	while (i < n && search[i] != '\0')
	{
		j = 0;
		while (search[i + j] == input[j] && (i + j) < n)
		{
			j++;
			if (input[j] == '\0')
				return ((char *)search + i);
		}
		i++;
	}
	return (NULL);
}
