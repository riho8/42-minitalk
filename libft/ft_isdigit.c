/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:14:07 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/22 10:58:00 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char c;
// 	c = '5';
// 	printf("5: %d\n", ft_isdigit(c));

// 	c = '+';
// 	printf("+: %d\n", ft_isdigit(c));

// 	return (0);
// }