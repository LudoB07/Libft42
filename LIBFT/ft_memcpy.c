/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubachma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:42:11 by lubachma          #+#    #+#             */
/*   Updated: 2023/10/13 14:42:26 by lubachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*char_dst;
	char	*char_src;

	char_dst = (char *)dst;
	char_src = (char *)src;
	i = 0;
	while (i < n && (src != (void *)0 || dst != (void *)0))
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
}
