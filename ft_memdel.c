/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 16:23:36 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 16:26:49 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memdel(void **ap)
{
	if (!ap)
		return ;
	if (!*ap)
		return ;

	free(*ap);
	*ap = NULL;
}
