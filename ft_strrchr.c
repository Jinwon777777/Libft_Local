/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:16:50 by jiha              #+#    #+#             */
/*   Updated: 2022/02/11 10:45:45 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	tmp;

	i = ft_strlen(s) - 1;
	tmp = -1;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return (s + i);
		i--;
	}
	if (s[i] == (char)c)
		return (s);
	return (NULL);
}
