/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 08:17:17 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/21 13:40:58 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	ch;

	i = 0;
	p = (unsigned char *)buf;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (p[i] == ch)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s1[] = "AB\0CDE";

// 	printf("you;%s\n", (char*)ft_memchr(s1, 'C', 4)); //CDE
// 	printf("ans;%s\n", (char*)memchr(s1, 'C', 4));
// 	printf("you;%s\n", (char*)ft_memchr(s1, '\0', 10)); //
// 	printf("ans;%s\n", (char*)memchr(s1, '\0', 10));
// 	printf("you;%s\n", (char*)ft_memchr(s1, '5', 4)); //null
// 	printf("ans;%s\n", (char*)memchr(s1, '5', 4));
// 	printf("you;%s\n", (char*)ft_memchr(s1, 'C', 0)); // null
// 	printf("ans;%s\n", (char*)memchr(s1, 'C', 0));
// 	printf("you;%s\n", (char*)ft_memchr(NULL, 'C', 3)); //segmentation fault
// 	printf("ans;%s\n", (char*)memchr(NULL, 'C', 3));

// 	return (0);
// }