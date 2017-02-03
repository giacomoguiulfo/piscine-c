/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:36:11 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/20 17:04:35 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int div;
	int i;

	i = 0;
	div = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			div = ((str[i] + 42) - 'a') / 26;
			str[i] = str[i] + 42 - (div * 26);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			div = ((str[i] + 42) - 'A') / 26;
			str[i] = str[i] + 42 - (div * 26);
		}
		i++;
	}
	return (str);
}