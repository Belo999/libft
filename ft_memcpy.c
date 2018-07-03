/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:43:04 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 15:50:24 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *destination;
	unsigned char *source;
	size_t i;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (--n)
	{
		destination[i] = sourcr[i];
		i++;
	}
	return (dest);
}
