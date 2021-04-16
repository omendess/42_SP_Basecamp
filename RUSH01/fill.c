/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omendes- <omendes-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:53:53 by fbafica           #+#    #+#             */
/*   Updated: 2021/04/11 22:15:50 by omendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void check_repetition(int matrix, int actual_line, int actual_column)
{
	// some code
}

void fill_in(int matrix[6][6])
{
	int counter_l = 0;
	int counter_c = 0;
	while (counter_l < 5)
	{
		while (counter_c < 5)
		{
			if (matrix[counter_l][(counter_c + 1)] == 1)
				matrix[counter_l];
		}
	}
}

void fill_c(int matrix[6][6], char *clues)
{
	int counter_l = 0;
	int counter_c = 0;
	int counter_c_clues = 16;
	while (counter_c < 6)
	{
		if (counter_c == 0)
		{	
			while (counter_c_clues <= 22)
			{
				matrix[(counter_l + 1)][counter_c] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_l++;
			}
		}
		counter_l = 0;
		if (counter_c == 5)
		{
			while (counter_c_clues <= 30)
			{
				matrix[(counter_l + 1)][counter_c] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_l++;
			}
		}
		counter_c++;
	}
}

void fill_l(int matrix[6][6], char *clues)
{
	int counter_l = 0;
	int counter_c = 0;
	int counter_c_clues = 0;
	while (counter_l < 6)
	{
		if (counter_l == 0)
		{	
			while (counter_c_clues <= 6)
			{
				matrix[counter_l][(counter_c + 1)] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_c++;
			}
		}
		counter_c = 0;
		if (counter_l == 5)
		{
			while (counter_c_clues <= 14)
			{
				matrix[counter_l][(counter_c + 1)] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_c++;
			}	
		}
		counter_l++;
	}
}

void fill(char *clues)
{
	int matrix[6][6];

	fill_l(matrix, clues);
	fill_c(matrix, clues);
}
