/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:30:45 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/25 09:51:34 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	if (buf1 == buf2)
		return (buf1);
	dest = (unsigned char *)buf1;
	src = (const unsigned char *)buf2;
	if (dest > src)
	{
		dest = dest + n - 1;
		src = src + n - 1;
		while (n-- > 0)
		{
			*dest-- = *src--;
		}
	}
	else
		ft_memcpy(buf1, buf2, n);
	return (buf1);
}

// int	main(void)
// {
// 	char buf[] = "ABCDE";
// 	char buf2[] = "ABCDE";
// 	char buf3[] = "ABCDE";
// 	// char buf4[] = "12345";
// 	// printf("no overlap\n");
// 	// memmove(buf, buf4, 3);
// 	// printf("ans:%s\n", buf);
// 	// ft_memmove(buf2, buf4, 3);
// 	// printf("you:%s\n", buf2);
// 	// memcpy(buf3, buf4, 3);
// 	// printf("memcpy:%s\n", buf3);

// 	printf("dst > src\n");
// 	memmove(buf + 2, buf, 3);
// 	printf("ans:%s\n", buf);
// 	ft_memmove(buf2 + 2, buf2, 3);
// 	printf("you:%s\n", buf2);
// 	memcpy(buf3 + 2, buf3, 3);
// 	printf("memcpy:%s\n", buf3);

// 	// printf("src > dst\n");
// 	// memmove(buf, buf+2, 2);
// 	// printf("ans:%s\n", buf);
// 	// ft_memmove(buf2, buf2+2, 2);
// 	// printf("you:%s\n", buf2);
// 	// memcpy(buf3, buf3+2, 2);
// 	// printf("memcpy:%s\n", buf3);

// 	return (0);
// }