/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoinchar.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wasayad <wasayad@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/22 17:48:39 by wasayad      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 11:16:42 by wasayad     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_strjoinchar(char const *s1, char const s2)
{
	char		*str;
	size_t		i;
	size_t		j;
	size_t		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + 2;
	if (!(str = malloc(sizeof(char) * len)))
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	if (s2 == 0)
	{
		str[i++] = -1;
	}
	else
		str[i++] = s2;
	str[i] = '\0';
	return (str);
}
