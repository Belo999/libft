/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 15:51:35 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 16:00:24 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *destination;
	unsigned char *source;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (--n)
	{
		destination[i] = source[i];
		i++;
		if (destination[i - 1] == (unsigned char)c)
			return (dest + i);
	}
	return (NULL);
}
