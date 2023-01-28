/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:30:14 by rshimaok          #+#    #+#             */
/*   Updated: 2023/01/08 15:49:11 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)str;
	while (n-- > 0)
		*dest++ = c;
	return (str);
}

// int	main(void){
// 	char buf[] = "ABCDEFGHIJK";
// 	ft_memset(buf + 2, '1', 3);
// 	printf("ABCDEFGHIJK→%s\n", buf);
// 	return (0);
// }