/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:03:09 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 16:22:58 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memalloc(size_t size)
{
	void *ret;

	ret = (void *)malloc(size);
	if (size)
	{
		if (!ret)
			return (NULL);
		while (size)
		{
			ret[--size] = '0';
		}
	}
	return (ret);
}
