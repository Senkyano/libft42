/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihoy <rihoy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:11:47 by rihoy             #+#    #+#             */
/*   Updated: 2023/11/22 14:08:15 by rihoy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void	*src, size_t num)
{
	size_t	i;
	char	*des;
	char	*sr;

	i = 0;
	if (!dest && !src)
		return (NULL);
	des = (char *)dest;
	sr = (char *)src;
	while (i < num)
	{
		des[i] = sr[i];
		i++;
	}
	return (des);
}
