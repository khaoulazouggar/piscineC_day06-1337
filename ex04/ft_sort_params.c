/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzouggar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 14:45:27 by kzouggar          #+#    #+#             */
/*   Updated: 2019/01/26 22:06:19 by kzouggar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		ft_putchar(s1[i]);
		i++;
	}
}

int		ft_comp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((*s1) - (*s2));
}

int		ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_comp(av[i], av[j]) > 0)
			{
				swap = av[i];
				av[i] = av[j];
				av[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	ft_sort(ac, av);
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
