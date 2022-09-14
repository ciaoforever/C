/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:49:19 by lvignoli          #+#    #+#             */
/*   Updated: 2022/09/13 12:01:35 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(int a, int b, int c )
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 55)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				put_char(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a +1;
		c = a +2;
	}
}
