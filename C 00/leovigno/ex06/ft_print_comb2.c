/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:53:32 by lvignoli          #+#    #+#             */
/*   Updated: 2022/09/13 17:00:19 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_char2(char i)
{
	put_char('0' + i / 10);
	put_char('0' + i % 10);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (b > 1)
			{
				put_char(',');
				put_char(' ');
			}
			put_char2(a);
			put_char(' ');
			put_char2(b);
			b++;
		}
		a++;
	}
}
