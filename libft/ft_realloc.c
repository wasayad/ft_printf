/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wasayad <wasayad@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/22 17:13:36 by wasayad      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 11:18:48 by wasayad     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

int		ft_realloc_c(t_printf *b, char c)
{
	if (!(b->temp = ft_strdup(b->str)))
		return (0);
	free(b->str);
	if (!(b->str = ft_strjoinchar(b->temp, c)))
		return (0);
	free(b->temp);
	b->len++;
	return (1);
}
