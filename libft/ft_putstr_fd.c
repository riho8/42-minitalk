/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:49:40 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/19 17:49:40 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (ft_strlen(s) > SIZE_MAX)
	{
		write(fd, s, SIZE_MAX);
		*s += SIZE_MAX;
	}
	write(fd, s, ft_strlen(s));
}
