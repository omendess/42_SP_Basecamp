/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omendes- <omendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:36:13 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/05 12:34:29 by omendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
**                o----o
**                |    |
**                |    |
**                o----o
**
** o - Tem que ser na primeira linha ou ultima linha
** o - Tem que ser na primeir coluna ou ultima coluna
** | - Tem que ser diferente da primeira linha e da ultima linha
** | - Tem que ser na primeira coluna ou na ultima coluna
** - - Tem que ser na primeira linha ou na ultima linha
** - - Tem que ser diferente da primeira coluna e da ultima coluna
** ' ' Tem que ser diferente da primeira linha e da ultima linha
** ' ' Tem que ser diferente da primeira coluna e da ultima colua

*/

void	rush(int x, int y)
{
	int line;
	int col;

	line = 0;
	if (y <= 0 || x <= 0)
		return ;
	while (line < y)
	{
		col = 0;
		while (col < x)
		{
			if ((line == 0 || line == y - 1) && (col == 0 || col == x - 1))
			ft_putchar('o');
			if ((line == 0 || line == y - 1) && (col != 0 && col != x - 1))
			ft_putchar('-');
			if ((line != 0 && line != y - 1) && (col == 0 || col == x - 1))
			ft_putchar('|');
			if ((line != 0 && line != y - 1) && (col != 0 && col != x - 1))
			ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
