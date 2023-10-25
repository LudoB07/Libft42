/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubachma <lubachma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:30:06 by lubachma          #+#    #+#             */
/*   Updated: 2023/10/20 16:09:50 by ludovicbachma    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_strcpy(char *dst, const char *src);
static char	*ft_strcat(char *dest, const char *src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (result)
	{
		ft_strcpy(result, s1);
		ft_strcat(result, s2);
	}
	return (result);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
