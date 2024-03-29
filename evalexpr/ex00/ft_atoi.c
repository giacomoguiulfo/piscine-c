/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 18:11:50 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/29 18:11:56 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char **str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	while (**str != '\0' && **str <= '9' && **str >= '0')
	{
		result = result * 10 + **str - '0';
		(*str)++;
	}
	return (result * sign);
}
