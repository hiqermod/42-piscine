/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyumusak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:45:31 by oyumusak          #+#    #+#             */
/*   Updated: 2021/11/25 12:01:48 by oyumusak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_sup(int w, int ww)
{
	int	www;

	www = ww + 1;
	while (www <= 9)
	{
		ft_putchar('0' + w);
		ft_putchar('0' + ww);
		ft_putchar('0' + www);
		if (w * 100 < 700)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		www++;
	}
}

void	ft_print_comb(void)
{
	int	w;
	int	ww;
	int	www;

	w = 0;
	ww = 0;
	www = 0;
	while (w <= 9)
	{
		ww = w + 1;
		while (ww <= 9)
		{
			ft_print_comb_sup(w, ww);
			ww++;
		}
		ww = 0;
		w++;
	}
}
