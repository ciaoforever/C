/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:24:12 by lvignoli          #+#    #+#             */
/*   Updated: 2022/09/13 15:12:37 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char nb)
{
	write (1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	int	a;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		put_char('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		a = nb / 10;
		nb = nb % 10;
		ft_putnbr(a);
		put_char(nb + 48);
	}
	else if (nb >= 0)
		put_char(nb + 48);
}
