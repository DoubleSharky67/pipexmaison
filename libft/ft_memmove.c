/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 20:03:00 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/02 14:03:35 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (dest <= src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (i < n)
		{
			d[n - i - 1] = s[n - i - 1];
			i++;
		}
		d[n] = '\0';
	}
	return (d);
}
