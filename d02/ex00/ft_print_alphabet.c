/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 10:52:17 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/12 11:41:38 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int i;
	int	n;

	i = 0;
	n = 97;
	while (i < 26)
	{
		ft_putchar((char)n);
		n++;
		i++;
	}
}
