/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:30:45 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/29 09:37:57 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

// int	main(void)
// {
// 	printf("you;%c\n", ft_tolower('a'));
// 	printf("ans;%c\n", tolower('a'));
// 	printf("you;%c\n", ft_tolower('A'));
// 	printf("ans;%c\n", tolower('A'));
// 	printf("you;%c\n", ft_tolower('!'));
// 	printf("ans;%c\n", tolower('!'));
// }