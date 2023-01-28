/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:29:46 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/29 09:37:22 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

// int	main(void)
// {
// 	printf("you;%c\n", ft_toupper('a'));
// 	printf("ans;%c\n", toupper('a'));
// 	printf("you;%c\n", ft_toupper('A'));
// 	printf("ans;%c\n", toupper('A'));
// 	printf("you;%c\n", ft_toupper('!'));
// 	printf("ans;%c\n", toupper('!'));
// }