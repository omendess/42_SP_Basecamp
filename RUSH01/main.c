/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:54:03 by fbafica           #+#    #+#             */
/*   Updated: 2021/04/10 20:55:17 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void fill(char *clues);

int main(int argc, char **argv)
{
	char *clues = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	printf("%s", clues);
	fill(clues);
	return (0);
}
