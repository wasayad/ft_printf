/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: wasayad <wasayad@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:57:57 by wasayad      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/04 17:59:38 by wasayad     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libftprintf.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char *d;

	d = b;
	while (len)
	{
		*d = 0;
		d++;
		len--;
	}
}
