/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:51:54 by lvignoli          #+#    #+#             */
/*   Updated: 2022/09/15 18:47:20 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
			dest[i] = src[i];
			i++;
	}
	dest[i] = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
