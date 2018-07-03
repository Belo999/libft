/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 14:30:05 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 15:12:52 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t d_len;
	size_t s_len;
	size_t i;

	d_len = ft_strlen((const char *)dest);
	s_len = ft_strlen(src);
	i = 0;
	if (size < d_len + 1)
		return (n + s_len);
	if (size == d_len + 1)
		return (d_len + s_len);
	ft_memcpy(dest + d_len, src, n - d_len + 1);
	dest[size - 1] = '\0';
	return (d_len + s_len);
}
