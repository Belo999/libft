/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmolokan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:42:18 by tmolokan          #+#    #+#             */
/*   Updated: 2018/07/03 14:28:52 by tmolokan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
#include "stdlib.h"

int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strstr(const char *search, const char *input);
char	*ft_strnstr(const char *search, const char *input, size_t n);
char	*ft_strcat(const char *dest, const char *src);
char	*ft_strncat(const char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *src);

int		main(void)
{
	char *res;
	char s1[40] = "This is the source";
	const char s2[40] = " and dest   Belo";
	res = ft_strncat(s1, s2, 9);
	printf("%s\n", res);
}
