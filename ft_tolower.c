/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:41:32 by tmolokan          #+#    #+#             */
/*   Updated: 2018/06/06 09:44:04 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolowe(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
