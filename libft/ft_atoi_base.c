/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wasayad <wasayad@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 13:39:54 by wasayad      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 17:59:38 by wasayad     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

static int		ft_base_verif(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

static int		ft_compare(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

static int		ft_atoi1(char *str, char *base, int size)
{
	int nb;
	int sign;
	int i;
	int z;

	z = 0;
	nb = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
		{
			sign = -sign;
		}
	}
	while (ft_compare(base, str[i]) != -1)
	{
		z = ft_compare(base, str[i]);
		nb = nb * size + z;
		i++;
	}
	return (nb * sign);
}

int				ft_atoi_base(char *str, char *base)
{
	int nb;

	nb = 0;
	if (ft_base_verif(base) > 1)
	{
		nb = ft_atoi1(str, base, ft_base_verif(base));
	}
	return (nb);
}
