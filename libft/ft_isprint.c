/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:28:46 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/22 11:12:25 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
//     char c;
//     c = 'Q';
//     printf("%c: %d\n", c, ft_isprint(c));
//     c = '\t';
//     printf("%c: %d\n", c, ft_isprint(c));
//     return (0);
// }