/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:13:57 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/22 10:56:16 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	printf("A: %d\n", ft_isalpha(c));
// 	c = 'q';
// 	printf("q: %d\n", ft_isalpha(c));
// 	c = '+';
// 	printf("+: %d\n", ft_isalpha(c));
// 	return (0);
// }