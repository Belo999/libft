/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:11:39 by tmolokan          #+#    #+#             */
/*   Updated: 2018/06/06 13:28:16 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	if(*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (hasystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char*)haystack + i);
		}
		i++;
	}
	return (NULL);
}
