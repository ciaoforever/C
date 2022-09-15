/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:04:53 by lvignoli          #+#    #+#             */
/*   Updated: 2022/09/15 18:39:50 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	numb(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	initialize(int *x, int *y)
{
	*x = 0;
	*y = 0;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	initialize(&i, &flag);
	while (str[i] != 0)
	{
		if (lowcase(str[i]) && flag == 0)
		{
			str[i] -= 32;
			flag = 1;
		}
		else if (upcase(str[i]))
		{
			if (flag == 0)
				flag = 1;
			else
				str[i] += 32;
		}
		else if ((lowcase(str[i]) && flag == 1) || numb(str[i]))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}
