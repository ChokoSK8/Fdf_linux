/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <abrun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:18:58 by abrun             #+#    #+#             */
/*   Updated: 2020/11/23 09:33:18 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	size_t			s1_len;
	size_t			s2_len;
	char			*strjoin;
	size_t			strjoin_len;
	unsigned int	counter;

	counter = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	strjoin_len = s1_len + s2_len + 1;
	strjoin = malloc(sizeof(char) * strjoin_len);
	if (!strjoin)
		return (NULL);
	while (counter < s1_len)
	{
		strjoin[counter] = s1[counter];
		counter++;
	}
	while (counter - s1_len < s2_len)
	{
		strjoin[counter] = s2[counter - s1_len];
		counter++;
	}
	strjoin[counter] = '\0';
	return (strjoin);
}
