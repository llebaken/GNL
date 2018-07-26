/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llebaken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:55:48 by llebaken          #+#    #+#             */
/*   Updated: 2018/06/28 17:07:44 by llebaken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			c;
	unsigned char	*str;

	c = 0;
	str = (unsigned char *)s;
	while (c < n && n > 0)
	{
		str[c] = 0;
		c++;
	}
}
