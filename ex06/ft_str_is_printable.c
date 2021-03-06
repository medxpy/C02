/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-moum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:10:41 by mel-moum          #+#    #+#             */
/*   Updated: 2021/07/06 18:24:09 by mel-moum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	m;

	m = 0;
	while (str[m])
	{
		if (!((str[m] >= 32 && str[m] <= 126)))
			return (0);
		else
			m++;
	}
	return (1);
}
