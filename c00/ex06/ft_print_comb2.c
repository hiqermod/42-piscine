/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyumusak <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:00:17 by oyumusak          #+#    #+#             */
/*   Updated: 2021/11/25 13:00:30 by oyumusak         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2_sup2(int w, int ww, int www, int wwww)
{
	if (w * 1000 + ww * 100 + www * 10 + wwww != 9899)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2_sup(int w, int ww)
{
	int	www;
	int	wwww;

	www = 0;
	wwww = 0;
	while (www <= 9)
	{
		while (wwww <= 9)
		{
			if (w * 10 + ww < www * 10 + wwww)
			{
				ft_putchar(w + '0');
				ft_putchar(ww + '0');
				ft_putchar(' ');
				ft_putchar(www + '0');
				ft_putchar(wwww + '0');
				ft_print_comb2_sup2(w, ww, www, wwww);
			}
			wwww++;
		}
		wwww = 0;
		www++;
	}
}

void	ft_print_comb2(void)
{
	int	w;
	int	ww;

	w = 0;
	ww = 0;
	while (w <= 9)
	{
		while (ww <= 9)
		{
			ft_print_comb2_sup(w, ww);
			ww++;
		}
		ww = 0;
		w++;
	}
}
