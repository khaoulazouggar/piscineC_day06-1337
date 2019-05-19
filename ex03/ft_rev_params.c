/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 11:10:53 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/26 22:04:40 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int i;
	int j;

	j = 0;
	if (ac > 1)
	{
		j = ac - 1;
		while (j > 0)
		{
			i = 0;
			while (av[j][i])
			{
				ft_putchar(av[j][i]);
				i++;
			}
			ft_putchar('\n');
			j--;
		}
	}
	return (0);
}
