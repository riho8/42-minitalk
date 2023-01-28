/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:58:11 by rshimaok          #+#    #+#             */
/*   Updated: 2022/10/22 16:04:09 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

// Libft ver. revised in gnl 
// char	*ft_strchr(const char *s, int c)
// {
// 	char	ch;

// 	ch = (char)c;
// 	while (*s != '\0')
// 	{
// 		if (*s == ch)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (ch == '\0')
// 		return ((char *)s);
// 	return (NULL);
// }

// int	main(void)
// {
// 	char test[20] = "abcdefghijk";

// 	printf("you;%s\n", ft_strchr(test, 'j')); // jk
// 	printf("ans;%s\n", strchr(test, 'j'));
// 	printf("you;%s\n", ft_strchr(test, 'r')); // null
// 	printf("ans;%s\n", strchr(test, 'r'));
// 	printf("you;%s\n", ft_strchr(test, '\0')); //
// 	printf("ans;%s\n", strchr(test, '\0'));
// 	printf("you;%s\n", ft_strchr(NULL, 'c')); //segfo
// 	printf("ans;%s\n", strchr(NULL, 'c'));

// 	return (0);
// }