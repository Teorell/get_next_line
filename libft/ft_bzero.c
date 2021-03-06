/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:42:04 by lsandor-          #+#    #+#             */
/*   Updated: 2018/11/22 18:53:37 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*t;

	i = 0;
	t = (char *)s;
	while (n > i)
		t[i++] = '\0';
}
