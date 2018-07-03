/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:15:41 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 15:37:28 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memset(void	*s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	while (--n)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
