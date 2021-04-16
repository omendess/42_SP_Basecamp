/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 02:43:38 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/04/04 22:57:16 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

/*
** RUSH 00
** TEMA DO GRUPO == 15 % 5 == 0
** GRUPO #41
** LIDER: Orlando (omendes-)
** MEMBRORS: Gabriel (gvitor-s), Maurício (mmassaak)
*/

/*
** Passo a passo para validar o codigo com o norminete e criar o comilado
** norminette -R CheckForbiddenSourceHeader *.c
** gcc -Wall -Werror -Wextra ft_putchar.c main.c rush00.c -o a.out && ./a.out
*/

int		main(void)
{
	rush(5, 5);
	return (0);
}
