/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omendes- <omendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 04:41:35 by omendes-          #+#    #+#             */
/*   Updated: 2021/04/13 23:08:22 by omendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int y;

	x = -1;
	while (++x < size)
	{
		y = -1;
		while (++y < size)
		{
			if (tab[y] > tab[y + 1])
			{
				ft_swap(&tab[y], &tab[y + 1]);
			}
		}
	}
}
