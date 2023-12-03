/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceauses <aceauses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:26:43 by aceauses          #+#    #+#             */
/*   Updated: 2023/12/03 16:52:41 by aceauses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*memory;
	size_t	l;
	size_t	i;

	if (str == NULL)
		return (NULL);
	l = ft_strlen(str);
	memory = (char *)malloc(l + 1);
	if (memory == NULL)
		return (0);
	i = 0;
	while (i < l)
	{
		memory[i] = str[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
