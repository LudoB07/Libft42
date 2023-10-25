/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubachma <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:03:59 by lubachma          #+#    #+#             */
/*   Updated: 2023/10/16 11:10:20 by lubachma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		i++;
		len++;
	}
	return (len);
}
